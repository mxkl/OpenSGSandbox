#
# Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006, 2007 The SCons Foundation
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
# KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#

__revision__ = "/home/scons/scons/branch.0/branch.96/baseline/src/engine/SCons/PathList.py 0.96.95.D001 2007/02/12 21:41:50 knight"

__doc__ = """SCons.PathList

A module for handling lists of directory paths (the sort of things
that get set as CPPPATH, LIBPATH, etc.) with as much caching of data and
efficiency as we can while still keeping the evaluation delayed so that we
Do the Right Thing (almost) regardless of how the variable is specified.

"""

import os
import string

import SCons.Memoize
import SCons.Util

#
# Variables to specify the different types of entries in a PathList object:
#

TYPE_STRING_NO_SUBST = 0        # string with no '$'
TYPE_STRING_SUBST = 1           # string containing '$'
TYPE_OBJECT = 2                 # other object

def node_conv(obj):
    """
    This is the "string conversion" routine that we have our substitutions
    use to return Nodes, not strings.  This relies on the fact that an
    EntryProxy object has a get() method that returns the underlying
    Node that it wraps, which is a bit of architectural dependence
    that we might need to break or modify in the future in response to
    additional requirements.
    """
    try:
        get = obj.get
    except AttributeError:
        pass
    else:
        obj = get()
    return obj

class _PathList:
    """
    An actual PathList object.
    """
    def __init__(self, pathlist):
        """
        Initializes a PathList object, canonicalizing the input and
        pre-processing it for quicker substitution later.

        The stored representation of the PathList is a list of tuples
        containing (type, value), where the "type" is one of the TYPE_*
        variables defined above.  We distinguish between:

            strings that contain no '$' and therefore need no
            delayed-evaluation string substitution (we expect that there
            will be many of these and that we therefore get a pretty
            big win from avoiding string substitution)

            strings that contain '$' and therefore need substitution
            (the hard case is things like '${TARGET.dir}/include',
            which require re-evaluation for every target + source)

            other objects (which may be something like an EntryProxy
            that needs a method called to return a Node)

        Pre-identifying the type of each element in the PathList up-front
        and storing the type in the list of tuples is intended to reduce
        the amount of calculation when we actually do the substitution
        over and over for each target.
        """
        if SCons.Util.is_String(pathlist):
            pathlist = string.split(pathlist, os.pathsep)
        elif SCons.Util.is_List(pathlist) or SCons.Util.is_Tuple(pathlist):
            pathlist = SCons.Util.flatten(pathlist)
        else:
            pathlist = [pathlist]

        pl = []
        for p in pathlist:
            try:
                index = string.find(p, '$')
            except (AttributeError, TypeError):
                type = TYPE_OBJECT
            else:
                if index == -1:
                    type = TYPE_STRING_NO_SUBST
                else:
                    type = TYPE_STRING_SUBST
            pl.append((type, p))

        self.pathlist = tuple(pl)

    def __len__(self): return len(self.pathlist)

    def __getitem__(self, i): return self.pathlist[i]

    def subst_path(self, env, target, source):
        """
        Performs construction variable substitution on a pre-digested
        PathList for a specific target and source.
        """
        result = []
        for type, value in self.pathlist:
            if type == TYPE_STRING_SUBST:
                value = env.subst(value, target=target, source=source,
                                  conv=node_conv)
            elif type == TYPE_OBJECT:
                value = node_conv(value)
            result.append(value)
        return tuple(result)


class PathListCache:
    """
    A class to handle caching of PathList lookups.

    This class gets instantiated once and then deleted from the namespace,
    so it's used as a Singleton (although we don't enforce that in the
    usual Pythonic ways).  We could have just made the cache a dictionary
    in the module namespace, but putting it in this class allows us to
    use the same Memoizer pattern that we use elsewhere to count cache
    hits and misses, which is very valuable.

    Lookup keys in the cache are computed by the _PathList_key() method.
    Cache lookup should be quick, so we don't spend cycles canonicalizing
    all forms of the same lookup key.  For example, 'x:y' and ['x',
    'y'] logically represent the same list, but we don't bother to
    split string representations and treat those two equivalently.
    (Note, however, that we do, treat lists and tuples the same.)

    The main type of duplication we're trying to catch will come from
    looking up the same path list from two different clones of the
    same construction environment.  That is, given
    
        env2 = env1.Clone()

    both env1 and env2 will have the same CPPPATH value, and we can
    cheaply avoid re-parsing both values of CPPPATH by using the
    common value from this cache.
    """
    if SCons.Memoize.use_memoizer:
        __metaclass__ = SCons.Memoize.Memoized_Metaclass

    memoizer_counters = []

    def __init__(self):
        self._memo = {}

    def _PathList_key(self, pathlist):
        """
        Returns the key for memoization of PathLists.

        Note that we want this to be quick, so we don't canonicalize
        all forms of the same list.  For example, 'x:y' and ['x', 'y']
        logically represent the same list, but we're not going to bother
        massaging strings into canonical lists here.

        The reason

        """
        if SCons.Util.is_List(pathlist):
            pathlist = tuple(pathlist)
        return pathlist
        
    memoizer_counters.append(SCons.Memoize.CountDict('PathList', _PathList_key))

    def PathList(self, pathlist):
        """
        Returns the cached _PathList object for the specified pathlist,
        creating and caching a new object as necessary.
        """
        pathlist = self._PathList_key(pathlist)
        try:
            memo_dict = self._memo['PathList']
        except KeyError:
            memo_dict = {}
            self._memo['PathList'] = memo_dict
        else:
            try:
                return memo_dict[pathlist]
            except KeyError:
                pass

        result = _PathList(pathlist)

        memo_dict[pathlist] = result

        return result

PathList = PathListCache().PathList


del PathListCache

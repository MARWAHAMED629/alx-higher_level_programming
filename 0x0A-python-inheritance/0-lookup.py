#!/usr/bin/python3
'''Module for lookup method.'''


def lookup(ob):
    '''Looks up object attributes and methods.
    Args:
        ob (object): the object to the list.

    Returns:
        list: the List of attributes.
    '''
    return dir(ob)

#!/usr/bin/python3
"""Module for add_integer method."""


def add_integer(a, b=98):
    """ADD two integers.

    The Args:
        a: First integer.
        b: Second integer,it default 98.

    Raises:
        Type Error: if a, b are'nt integer, float.

    Returns:
        The sum of the two integers.
    """

    if type(a) not in (int, float):
        raise TypeError('a must be an integer')
    if type(b) not in (int, float):
        raise TypeError('b must be an integer')
    return int(a) + int(b)

if __name__ == "__main__":
    import doctest
    doctest.testfile("tests/0-add_integer.txt")

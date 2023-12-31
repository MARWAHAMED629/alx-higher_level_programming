#!/usr/bin/python3
"""Define a class Square."""


class Square:
    """Represent a square."""

    def __init__(self, size=0):
        """Initialize a new square.

        Args:
            size (int): The size of the new square.
        """
        self.size = size

    @property
    def size(self):
        """Get/set  current size of the square."""
        return (self.__size)

    @size.setter
    def size(self, v):
        if not isinstance(v, int):
            raise TypeError("size must be an integer")
        elif v < 0:
            raise ValueError("size must be >= 0")
        self.__size = v

    def area(self):
        """Return  current area of the square."""
        return (self.__size * self.__size)

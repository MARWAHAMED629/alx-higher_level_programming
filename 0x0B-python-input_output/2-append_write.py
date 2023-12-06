#!/usr/bin/python3
# 2-append_write.py
"""Defines a file-appending function."""


def append_write(filename="", text=""):
    """Appends a string to the end of a UTF8 text file.

    Args:
        filename (string): The name of the file to append to.
        text (string): The string to append to the file.
    Returns:
        The number of the characters appended.
    """
    with open(filename, "a", encoding="utf-8") as f:
        return f.write(text)

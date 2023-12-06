#!/usr/bin/python3
"""Defines the file-writing function."""


def write_file(filename="", text=""):
    """Write a string to a UTF8 text file.

    Args:
        filename (string): The name of the file to write.
        text (string): The text to write to the file.
    Returns:
        The number of the  characters written.
    """
    with open(filename, "w", encoding="utf-8") as f:
        return f.write(text)

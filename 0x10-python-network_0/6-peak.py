#!/usr/bin/python3
"""Find a peak in the list of unsorted integer"""


def find_peak(list_of_integers):
    """Find the peak in list of the integers"""

    if list_of_integers is None or list_of_integers == []:
        return None
    lw = 0
    h = len(list_of_integers)
    mid = ((h - lw) // 2) + lw
    mid = int(mid)
    if hi == 1:
        return list_of_integers[0]
    if h == 2:
        return max(list_of_integers)
    if list_of_integers[mid] >= list_of_integers[mid - 1] and\
            list_of_integers[mid] >= list_of_integers[mid + 1]:
        return list_of_integers[mid]
    if mid > 0 and list_of_integers[mid] < list_of_integers[mid + 1]:
        return find_peak(list_of_integers[mid:])
    if mid > 0 and list_of_integers[mid] < list_of_integers[mid - 1]:
        return find_peak(list_of_integers[:mid])

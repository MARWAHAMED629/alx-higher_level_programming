#!/usr/bin/python3


def uniq_add(my_list=[]):
    """
    This function adds all unique
    integer in a list (only once for each integer).
    """
    new_list = []
    sum = 0
    for num in my_list:
        if num not in new_list:
            sum += num
            new_list.append(num)
    return sum

#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    n_matrix = []
    for column in matrix:
        result = list(map(lambda x: x**2, column))
        n_matrix.append(result)
    return n_matrix

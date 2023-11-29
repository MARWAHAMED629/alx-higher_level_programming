#!/usr/bin/python3
"""Defines THE function that multiplies 2
matrices by using the module NumPy.

Attributes:
    m_a (matrix)
    m_b (matrix)
"""


import numpy as np


def lazy_matrix_mul(m_a, m_b):
    """Multiplies two matrices using numpy

    Args:
        m_a (matrix):THE first input in matrix
        m_b (matrix): THE second input in  matrix

    Returns:
        matrix: A product of the two matrix
    """
    # m_a = ([1, 2], [3, 4])
    # m_b = [[1, 2], [3, 4]]
    return np.matmul(m_a, m_b)

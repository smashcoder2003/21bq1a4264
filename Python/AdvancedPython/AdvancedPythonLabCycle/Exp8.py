import numpy as np


def transposeOfMatrix(matrix1):
    return np.transpose(matrix1)


if __name__ == '__main__':
    m1 = np.array([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]])

    print(f'The transposed matrix is : \n {transposeOfMatrix(m1)}')

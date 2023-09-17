import numpy as np


def matrixAddition(matrix1, matrix2):
    return np.add(matrix1, matrix2)
    # Another way to add is by using the .(dot) operator on a numpy array object
    # print(m1.add(m2))


def matrixMultiplication(matrix1, matrix2):
    return np.dot(matrix1, matrix2)
    # You can also apply the dot operator concept from the matrixAddition function


if __name__ == '__main__':
    m1 = np.array([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]])
    m2 = np.array([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]])

    print(f'Matrix after addition is : \n {matrixAddition(m1, m2)}')
    print(f'Matrix after multiplication is : \n {matrixMultiplication(m1, m2)}')


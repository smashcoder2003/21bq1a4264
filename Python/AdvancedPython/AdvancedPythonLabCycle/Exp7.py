import numpy as np


def findEigenVector(matrix1):
    # The function np.linalg.eig() returns the eigen values as first element
    # of the array and eigen vectors as second element of the array
    return np.linalg.eig(matrix1)


def findEigenValues(matrix1):
    # findEigenValues returns a numpy array consisting of Eigen values of the
    # given matrix
    return np.linalg.eigvals(matrix1)


if __name__ == '__main__':
    m1 = np.array([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]])

    print(f'The Eigen vector of m1 is: \n {findEigenVector(m1)}')
    print(f'The Eigen values of m1 is: \n {findEigenValues(m1)}')


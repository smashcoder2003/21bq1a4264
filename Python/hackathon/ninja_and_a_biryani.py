import math


def ninjaBiryaniParty(N, M, X, A):
    # Each friend eats some Kgs per hour so total they can eat per hour equals sum(A)
    friends_can_eat = sum(A)
    return [math.ceil(M / friends_can_eat), math.ceil(M / (X + friends_can_eat))]


if __name__ == '__main__':
    N = 2
    M = 6
    X = 2
    A = [2, 1]
    print(ninjaBiryaniParty(N, M, X, A))


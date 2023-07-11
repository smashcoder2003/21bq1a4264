def Sieve(n: int) -> None:
    factors = [0 for i in range(n+1)]

    for i in range(2, n):
        if factors[i] != 1:
            for j in range(i*i, n+1, i):
                factors[j] = 1

    for i in range(2, n + 1):
        if factors[i] != 1:
            print(i, end=" ")


if __name__ == "__main__":
    Sieve(100000000)
def stoneJumper(N, H):
    H = sorted(H)
    i = 1
    j = N - 1
    calories = 0
    calories += H[j] ** 2
    while i <= j:
        calories += (H[j] - H[i]) ** 2
        j -= 1
        calories += (H[i] - H[j]) ** 2
        i += 1
    return calories
if __name__ == '__main__':
    print(stoneJumper(4, [5, 4, 4, 4]))



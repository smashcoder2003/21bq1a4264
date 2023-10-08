from collections import Counter
def ninjaRegularPolygon(N, M, A):
    counter = Counter(A)

    for x in counter:
        if counter[x] == M:
            return "YES"
    return "NO"


# Example usage
N = 5
M = 3
A = [2, 2, 2, 5, 3]

result = can_construct_regular_polygon(N, M, A)
print(result)  # Output: "YES"

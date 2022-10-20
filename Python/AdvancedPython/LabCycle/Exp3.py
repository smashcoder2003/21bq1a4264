n = int(input("Enter the no of rocks: "))
rocks = []
for i in range(n):
    rocks.append(int(input()))
while rocks:
    print(rocks.index(min(rocks)))


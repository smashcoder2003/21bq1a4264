if __name__ == '__main__':
    # no of processes
    n = 5
    # Types of resources
    m = 3

    alloc = [[0, 1, 0], [2, 0, 0],
            [3, 0, 2], [2, 1, 1], [0, 0, 2]]

    capacity = [[7, 5, 3], [3, 2, 2],
           [9, 0, 2], [2, 2, 2], [4, 3, 3]]

    avail = [3, 3, 2]

    need = [[0 for i in range(m)] for j in range(n)]
    complete = [False]*n
    sequence = [0]*n
    ind = 0
    for i in range(n):
        for j in range(m):
            need[i][j] = capacity[i][j] - alloc[i][j]

    print("The sequence is: ")

    while not all(complete):
        for j in range(n):
            flag = 0
            if not complete[j]:
                for k in range(m):
                    if need[j][k] > avail[k]:
                        flag = 1
                        break

                if flag == 0:
                    sequence[ind] = j
                    ind += 1
                    complete[j] = True
                    for k in range(m):
                        avail[k] += alloc[j][k]
                        alloc[j][k] = 0
    print(sequence)
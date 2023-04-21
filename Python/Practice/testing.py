list = [[1, 4], [2, 5], [3, 6], [7], [5, 6], [6, 9], [], [11], [], [], [], [15], [], [], [], []]
def search(list):
    path = [0]
    for j in path:
        if list[j] != []:
            path.extend(list[j])
        else:
            while j in path:
                path.remove(j)
    if path != [1]:
        print(path)

search(list)
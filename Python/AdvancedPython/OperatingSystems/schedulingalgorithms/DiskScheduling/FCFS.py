def fcfsDiskScheduling(sectors: list[int], head):
    seek_time = 0
    for i in range(len(sectors)):
        seek_time += abs(head - sectors[i])
        head = sectors[i]
    return seek_time


if __name__ == '__main__':
    sectors = [176, 79, 34, 60, 92, 11, 41, 114]
    head = 50
    print(fcfsDiskScheduling(sectors, head))

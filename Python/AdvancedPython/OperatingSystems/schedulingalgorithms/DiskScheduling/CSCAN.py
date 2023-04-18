def cscanDiskScheduling(tracks: list[int], head: int):
    left = list()
    right = list()
    seek_time = 0

    for i in range(len(tracks)):
        if tracks[i] <= head:
            left.append(tracks[i])
        else:
            right.append(tracks[i])

    left.sort()
    right.sort()

    for i in range(len(right)):
        seek_time += abs(head - right[i])
        head = right[i]
    seek_time += abs(head - 199)
    seek_time += 199
    head = 0

    for i in range(len(left)):
        seek_time += abs(head - left[i])
        head = left[i]
    return seek_time


if __name__ == '__main__':
    tracks = [82, 170, 43, 140, 24, 16, 190]

    head = 50
    print("seek_time: ", cscanDiskScheduling(tracks, head))

def scanDiskScheduling(tracks: list[int], head: int, direction: bool):
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

    if not direction:
        for i in range(len(left)-1, -1, -1):
            seek_time += abs(head - left[i])
            head = left[i]
        seek_time += abs(head - 0)
        head = 0

        for i in range(len(right)):
            seek_time += abs(head - right[i])
            head = right[i]
    else:
        for i in range(len(right)):
            seek_time += abs(head - right[i])
            head = right[i]
        seek_time += abs(head - 199)
        head = 199

        for i in range(len(left)-1, -1, -1):
            seek_time += abs(head - left[i])
            head = left[i]
    return seek_time


if __name__ == '__main__':
    tracks = [176, 79, 34, 60, 92, 11, 41, 114]

    head = 50
    print("seek_time: ", scanDiskScheduling(tracks, head, 0))

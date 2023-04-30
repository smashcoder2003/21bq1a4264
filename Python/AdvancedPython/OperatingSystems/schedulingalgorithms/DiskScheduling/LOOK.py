from matplotlib import pyplot as plt


def lookDiskScheduling(tracks: list[int], head: int, direction: bool):
    left = list()
    right = list()
    seek_time = 0
    x = [head]

    for track in tracks:
        if track <= head:
            left.append(track)
        else:
            right.append(track)

    left.sort()
    right.sort()

    if not direction:
        for i in range(len(left) - 1, -1, -1):
            seek_time += abs(head - left[i])
            head = left[i]

        for i in range(len(right)):
            seek_time += abs(head - right[i])
            head = right[i]
        x += sorted(left, reverse=True) + right

    else:
        for i in range(len(right)):
            seek_time += abs(head - right[i])
            head = right[i]

        for i in range(len(left) - 1, -1, -1):
            seek_time += abs(head - left[i])
            head = left[i]

        x += right + sorted(left, reverse=True)
    y = []
    for i in range(len(x)):
        y.append(-i)
    print("X: ", x)
    print("Y: ", y)
    plt.rcParams["xtick.top"] = plt.rcParams['xtick.labeltop'] = True
    plt.plot(x, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="LOOK")
    plt.xlim(0, 200)
    plt.yticks([])
    plt.title("LOOK")
    plt.show()

    return seek_time


if __name__ == '__main__':
    tracks = [82, 170, 43, 140, 24, 16, 190]

    head = 50
    print("seek_time: ", lookDiskScheduling(tracks, head, 1))

from matplotlib import pyplot as plt


def scanDiskScheduling(tracks: list[int], head: int, direction: bool):
    left = list()
    right = list()
    seek_time = 0

    for track in tracks:
        if track <= head:
            left.append(track)
        else:
            right.append(track)

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
        x = sorted(left, reverse=True) + [0] + right

    else:
        for i in range(len(right)):
            seek_time += abs(head - right[i])
            head = right[i]
        seek_time += abs(head - 199)
        head = 199

        for i in range(len(left)-1, -1, -1):
            seek_time += abs(head - left[i])
            head = left[i]

        x = right + [199] + sorted(left, reverse=True)
    print(seek_time)
    plt.rcParams['xtick.bottom'] = plt.rcParams['xtick.labelbottom'] = True
    plt.rcParams['xtick.top'] = plt.rcParams['xtick.labeltop'] = True
    y = []

    for i in range(len(x)):
        y.append(i*3)

    print(list(zip(x, y)))
    plt.plot(x, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="SCAN")
    plt.ylim = (0, len(x))
    plt.xlim(0, 199)
    plt.yticks([])
    plt.title('SCAN')
    plt.show()


if __name__ == '__main__':
    tracks = [176, 79, 34, 60, 92, 11, 41, 114]

    head = 50
    scanDiskScheduling(tracks, head, 1)

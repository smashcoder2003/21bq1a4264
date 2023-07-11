from matplotlib import pyplot as plt


def clookDiskScheduling(tracks: list[int], head: int):
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

    for i in range(len(right)):
        seek_time += abs(head - right[i])
        head = right[i]

    for i in range(len(left)):
        seek_time += abs(head - left[i])
        head = left[i]
    x += right + left
    y = [-i for i in range(len(x))]
    print("X: ", x)
    print("Y: ", y)
    plt.rcParams['xtick.top'] = plt.rcParams['xtick.labeltop'] = True
    plt.plot(x, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="CLOOK")

    plt.xlim(0, 200)
    plt.ylim = (0, len(x))
    plt.yticks(y)
    plt.title('CLOOK')
    plt.show()
    return seek_time


if __name__ == '__main__':
    tracks = [82, 170, 43, 140, 24, 16, 190]

    head = 50
    print("seek_time: ", clookDiskScheduling(tracks, head))

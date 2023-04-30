from matplotlib import pyplot as plt


def cscan_disk_scheduling(tracks: list[int], head: int):
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
    seek_time += abs(head - 199)
    head = 0

    for i in range(len(left)):
        seek_time += abs(head - left[i])
        head = left[i]

    print("right: ", right)
    print("left", left)
    x += right + [199] + [0] + left
    print("X: ", x)
    y = [-i for i in range(len(x))]
    print("Y: ", y)
    plt.rcParams['xtick.top'] = plt.rcParams['xtick.labeltop'] = True
    plt.plot(x, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="CSCAN")

    plt.xlim(0, 200)
    plt.ylim = (0, len(x))
    plt.yticks(y)
    plt.title('CSCAN')
    plt.show()

    return seek_time


if __name__ == '__main__':
    tracks = [176, 79, 34, 60, 92, 11, 41, 114]

    head = 50
    print("seek_time: ", cscan_disk_scheduling(tracks, head))

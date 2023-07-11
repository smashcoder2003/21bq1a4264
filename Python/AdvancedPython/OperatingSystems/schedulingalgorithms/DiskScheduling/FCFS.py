from matplotlib import pyplot as plt


def fcfsDiskScheduling(sectors: list[int], head):
    seek_time = 0
    x = [head]

    for i in range(len(sectors)):
        seek_time += abs(head - sectors[i])
        head = sectors[i]

    y = [-i for i in range(len(sectors) + 1)]

    plt.rcParams['xtick.top'] = plt.rcParams['xtick.labeltop'] = True

    plt.plot(x + sectors, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="SCAN")

    plt.xlim(0, 200)
    plt.yticks([])
    plt.title('FCFS')
    plt.show()
    return seek_time


if __name__ == '__main__':
    sectors = [176, 79, 34, 60, 92, 11, 41, 114]
    head = 50
    print(fcfsDiskScheduling(sectors, head))

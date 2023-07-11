from matplotlib import pyplot as plt


def sstf(sectors: list[int], head: int):
    x = [head]
    seek_time = 0

    while len(sectors):
        sector = sectors[0]
        min_seek_time = abs(head - sector)

        for _ in sectors:
            displacement = abs(_ - head)
            if displacement < min_seek_time:
                min_seek_time = displacement
                sector = _

        x.append(sector)
        seek_time = min_seek_time
        head = sector
        sectors.remove(sector)

    y = [-i for i in range(len(x))]

    plt.rcParams['xtick.top'] = plt.rcParams['xtick.labeltop'] = True
    plt.plot(x, y, color="green",
             markerfacecolor="blue",
             marker="o",
             markersize=5,
             linewidth=2,
             label="SCAN")
    plt.xlim(0, 200)
    plt.yticks([])
    plt.title('SSTF')
    plt.show()
    print(x)


if __name__ == '__main__':
    sectors = [176, 79, 34, 60, 92, 11, 41, 114]  # int -> (0-199)
    head = 50
    sstf(sectors, head)

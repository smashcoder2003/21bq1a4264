from matplotlib import pyplot as plt


def sstfDiskScheduling(tracks: list[int], head: int):
    seek_time = 0
    x = [head]
    while len(tracks) != 0:
        min_track = tracks[0]
        # finding track with the lowest seek time
        for j in range(len(tracks)):

            track_seek_time = abs(tracks[j] - head)
            if min_track - head > track_seek_time:
                min_track = tracks[j]
                x.append(tracks[j])

        seek_time += abs(head - min_track)
        head = min_track
        tracks.remove(min_track)
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
    return seek_time


if __name__ == '__main__':
    tracks = [176, 79, 34, 60, 92, 11, 41, 114]
    head = 50
    print(sstfDiskScheduling(tracks, head))

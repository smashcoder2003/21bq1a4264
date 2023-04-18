def sstfDiskScheduling(tracks: list[int], head: int):
    seek_time = 0
    while len(tracks) != 0:
        min_track = tracks[0]
        # finding track with the lowest seek time
        for j in range(len(tracks)):

            track_seek_time = abs(tracks[j] - head)
            if min_track - head > track_seek_time:
                min_track = tracks[j]

        seek_time += abs(head - min_track)
        head = min_track
        tracks.remove(min_track)

    return seek_time


if __name__ == '__main__':
    tracks = [176, 79, 34, 60, 92, 11, 41, 114]
    head = 50
    print(sstfDiskScheduling(tracks, head))

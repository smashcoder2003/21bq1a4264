from collections import defaultdict


def lfuPageReplacement(io_stream, n, no_of_frames,
                       page_faults=0, page_hits=0, page_misses=0):
    frequencies = dict()
    pages = []

    for i in range(n):
        if len(pages) < no_of_frames:
            if incoming_stream[i] not in pages:
                frequencies[io_stream[i]] = frequencies.get(io_stream[i], 0) + 1
                pages.append(io_stream[i])
                page_misses += 1
                page_faults += 1
            else:
                page_hits += 1
                frequencies[io_stream[i]] = frequencies.get(io_stream[i], 0) + 1
        else:
            if incoming_stream[i] not in pages:
                pages.pop(0)
                frequencies[io_stream[i]] = frequencies.get(io_stream[i], 0) + 1
                page_faults += 1
                page_misses += 1
                pages.append(io_stream[i])
            else:
                frequencies[io_stream[i]] = frequencies.get(io_stream[i], 0) + 1
                page_hits += 1
        pages = sorted(pages, key=lambda x: frequencies[x], reverse=True)

        for x in pages:
            print(x, end='\t')
        print()
    print("page_faults: ", page_faults)
    print("hits: ", page_hits)
    print("misses: ", page_misses)


if __name__ == '__main__':
    incoming_stream = [1, 2, 3, 4, 2, 1, 5]
    lfuPageReplacement(incoming_stream, len(incoming_stream), 3)

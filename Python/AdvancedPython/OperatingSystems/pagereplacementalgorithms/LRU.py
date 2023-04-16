def lruPageReplacement(io_stream: list[int], n: int, no_of_frames: int, page_faults: int = 0, hits: int = 0, misses: int = 0):
    pages = []
    lru = []
    for i in range(n):
        if len(lru) < no_of_frames:
            if io_stream[i] not in pages:
                pages.append(io_stream[i])
                lru.insert(0, io_stream[i])
                page_faults += 1
                misses += 1
            else:
                lru.remove(io_stream[i])
                lru.insert(0, io_stream[i])
                hits += 1
        else:
            if io_stream[i] not in pages:
                page_faults += 1
                misses += 1
                pages.remove(lru.pop())
                pages.append(io_stream[i])
                lru.insert(0, io_stream[i])
            else:
                hits += 1
                lru.remove(io_stream[i])
                lru.insert(0, io_stream[i])
        for x in pages:
            print(x, end='\t')
        print()
    print("page faults: ", page_faults)
    print("hits: ", hits)
    print("misses: ", misses)


if __name__ == '__main__':
    incoming_stream = [1, 2, 2, 3, 4, 5]
    lruPageReplacement(incoming_stream, len(incoming_stream), 3)

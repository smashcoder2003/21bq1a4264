from queue import Queue
# Page replacement algorithm
# FIFO


def pageReplacement(io_stream, n, no_of_frames, pagefaults=0, hits=0, misses=0):
    queue = Queue()
    s = set()

    for i in range(n):

        if len(s) < no_of_frames:
            if io_stream[i] not in s:
                queue.put(io_stream[i])
                s.add(io_stream[i])
                pagefaults += 1
                misses += 1
            else:
                hits += 1
        else:
            if io_stream[i] not in s:
                s.remove(queue.get())
                queue.put(io_stream[i])
                s.add(io_stream[i])
                pagefaults += 1
                misses += 1
            else:
                hits += 1

        for x in s:
            print(x, end='\t')
        print()
    print("pagefaults: ", pagefaults)
    print("hits: ", hits)
    print("misses: ", misses)


if __name__ == '__main__':
    incoming_stream = [1, 2, 3, 4, 5, 6]
    pageReplacement(incoming_stream, len(incoming_stream), 3)


from queue import Queue
# Page replacement algorithm
# FIFO


def pageReplacement(io_stream, n, no_of_frames, page_faults=0, hits=0, misses=0):
    queue = Queue()
    s = set()

    for page in io_stream:

        if page not in s:
            page_faults += 1
            
            if len(s) < no_of_frames:
                s.add(page)
                queue.put(page)
                
            else:
                s.remove(queue.get())
                s.add(page)

        for x in s:
            print(x, end='\t')
        print()
        
    print("pagefaults: ", page_faults)
    print("hits: ", hits)
    print("misses: ", misses)


if __name__ == '__main__':
    incoming_stream = [1, 2, 3, 4, 5, 6]
    pageReplacement(incoming_stream, len(incoming_stream), 3)


def lruPageReplacement(io_stream: list[int], no_of_frames: int, page_faults: int = 0, page_hits: int = 0):
    pages = []
    lru = []
    for page in io_stream:
        if page not in pages:
            page_faults += 1

            if len(pages) < no_of_frames:
                pages.append(page)
                lru.append(page)

            else:
                # Finding the least recent page in pages
                index = pages.index(lru[0])

                # Replacing the least recent page with new page
                pages[index] = page
                # Removing the last recent page as it is no longer necessary
                lru.pop(0)
                lru.append(page)
        else:
            page_hits += 1

            # Moving the page to last index as it has just occurred
            lru.remove(page)
            lru.append(page)

        for x in pages:
            print(x, end='\t')
        print()

    print("page faults: ", page_faults)
    print("hits: ", page_hits)


if __name__ == '__main__':
    incoming_stream = [1, 2, 2, 3, 4, 5]
    lruPageReplacement(incoming_stream, 3)

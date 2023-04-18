def lfuPageReplacement(io_stream, no_of_frames,
                       page_faults=0, page_hits=0):

    frequencies = dict()
    pages = []

    for page in io_stream:

        if page not in pages:
            page_faults += 1

            if len(pages) < no_of_frames:
                pages.append(page)
                frequencies[page] = frequencies.get(page, 0) + 1

            else:
                # Replacing the Least Frequent Page with new Page
                pages.append(page)
                frequencies[page] = frequencies.get(page, 0) + 1
                pages.pop(0)

        else:
            page_hits += 1
            frequencies[page] += 1

        # Sorting the pages according to their frequencies
        pages = sorted(pages, key=lambda x: frequencies[x])

        for item in pages:
            print(item, end='\t')
        print()

    print("page_faults: ", page_faults)
    print("page_hits: ", page_hits)


if __name__ == '__main__':
    incoming_stream = [7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2]
    lfuPageReplacement(incoming_stream, 3)

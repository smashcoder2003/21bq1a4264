def validatesequence(arr, sequence) -> object:
    seqidx = 0
    arridx = 0
    while seqidx < len(sequence) and arridx < len(arr):
        if arr[arridx] == sequence[seqidx]:
            seqidx += 1
        arridx += 1
    return seqidx == len(sequence)


if __name__ == "__main__":
    print(validatesequence([1, 2, 3, -1, 67], [2, -1, 67]))

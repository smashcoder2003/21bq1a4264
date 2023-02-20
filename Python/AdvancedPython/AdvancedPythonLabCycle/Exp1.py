"""
Algorithm for binary search:
step 1: while high > low --> calculate mid
step 2: Iterate through the array and check if the mid > ! < key
step 3: If mid < key eliminate the left half of the array and vice versa
step 4: recur the process until the boundaries(low,high) collapse.
"""


def binarysearch(arr, key):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == key:
            return f"The element {key} found at index: {mid}"
        elif arr[mid] < key:
            low = mid + 1
        elif arr[mid] > key:
            high = mid - 1
    return "element not found"


arr = [1, 2, 43, 45, 57, 67]
key = 43
result = binarysearch(arr, key)
print(result)

'''
Pseudo code for Recursive Bubble Sort
Step 1: Traverse through the array using recursion
Step 2: Start from index = 0(Star of the array)
Step 3: Recurse the function the until all the adjacent elements are sorted
Note: Step 3 == One pass of sorting
Step 4: Track the no of passes using count variable
Step 5: Call the get_largest() function until the Count<=len(arr)
'''
# Swapping adjacent elements of the complete array
# Completition of recursion of the function get_largest == one pass
# we count the no of passes using count variable


def get_largest(arr):
    if len(arr) <= 1:
        return arr
    if arr[0] >= arr[1]:
        temp = arr[0]
        arr[0] = arr[1]
        arr[1] = temp
        return get_largest(arr)
    else:
        return [arr[0]] + get_largest(arr[1:])


def bubblesort(arr, count):
    if count == len(arr):
        return arr
    arr = get_largest(arr)
    return bubblesort(arr, count + 1)


arr_test = [item for item in reversed(range(1, 10))]
arr_test2 = [3, 5, 1, 7, 8, 9, 4]

print('First Test Array: ', arr_test)
print('Sorted: ', bubblesort(arr_test, 0))

print('Second Test Array: ', arr_test2)
print('Sorted: ', bubblesort(arr_test2, 0))

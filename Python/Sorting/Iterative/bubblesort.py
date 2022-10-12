'''
Algorithm for Bubble Sort
Step 1: Traverse through the array
Step 2: At each traversal compare the current element and next element
        If current element>next element --> we swap the two elements
Note: Consider one complete traversal of the array as One Pass,
        We only traverse till j<n-i-1 where 
            i == The no of sorted elements --> we don't disturb the element if it is already sorted
            n == No of elements in the list
Step 3: Continue Step 2 until the array is Sorted.
'''
# Time Complexity: Best Case --> O(N)
# Time Complexity: Worst Case --> O(N^2)
# Auxiliary Space: O(1)


def bubbleSort(arr):
    n = len(arr)

    # Traverse through all array elements
    for i in range(n):

        # Last i elements are already in place
        for j in range(0, n-i-1):

            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr


if __name__ == "__main__":
    arr = [23, 56, 76, 89, 9, 77]
    print("The sorted array in Ascending Order is : ", bubbleSort(arr))

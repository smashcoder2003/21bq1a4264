'''
Algorithm For Selection Sort
Step 1 : Set MIN to location 0
Step 2 : Search the minimum element in the list
Step 3 : Swap with value at location MIN
Step 4 : Increment MIN to point to next element
Step 5 : Repeat until list is sorted
'''
# Selection sort in Python
# Time complexity: Best Case  --> O(N^2)
# Time complexity: Worst Case --> O(N^2)
# Auxilary Space: O(1)
# Sorting by finding min_index


def selectionSort(array, size):

    for ind in range(size):
        min_index = ind

        for j in range(ind + 1, size):
            # select the minimum element in every iteration
            if array[j] < array[min_index]:
                min_index = j
        # swapping the elements to sort the array
        if min_index != ind:
            (array[ind], array[min_index]) = (array[min_index], array[ind])


arr = [-2, 45, 0, 11, -9, 88, -97, -202, 747]
size = len(arr)
selectionSort(arr, size)
print('The array after sorting in Ascending Order by selection sort is:')
print(arr)

"""
Algorithm for Binary Search
Step 0: Check if the low<=high --> continue if True
Step 1: Calculate the mid_index of the array
Step 2: Based on the mid index divide the array into two parts
Step 3: Check if the element lies in the 2nd or 1st half of the array
        If it isn't both then element lies in the mid index
Step 4: Ignore the part of the array in which element doesn't lie in by
        Changing the low and high boundaries accordingly.
Step 5: After the calculation of each mid value, Check if the mid value 
        is the key.
Step 6: Repeat Step 4 and Step5 until Step 0 fails
"""
# Creating a function for binary search


def binarysearch(arr, key):
    low = 0
    high = len(arr)-1
    while low <= high:
        mid = low + high//2
        if arr[mid] < key:
            low = mid + 1
        elif arr[mid] > key:
            high = mid - 1
        else:
            return f"The element found at index: {mid}"
    return "Element not found."


arr = []
for i in range(int(input("Enter the no of elements of array: "))):
    arr.append(int(input("Enter the element: ")))
key = int(input("Enter the element you want to find: "))
result = binarysearch(arr, key)
print(result)

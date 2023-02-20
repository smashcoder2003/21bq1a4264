"""
Algorithm for linear search(Iterative Approach.)
Step 1: Traverse through the array
Step 2: At each traversal compare the current element with the key.
Step 3: If the current element == key --> return the element and it's index
Step 4: If the traversal of the list is complete and the key is not found 
        The key does not exist in the list.
"""
# Time complexity: Best case --> O(1)
# Time complexity: Worst case --> O(N)
# Auxilary Space: None
# Function for implementing linearSearch


def linearSearch(arr, key):
    # Checking the size of array
    size = len(arr)
    # Traversing through each element
    for i in range(size):
        # Comparing each element with the key and returning element and it's index if
        # element == key
        if arr[i] == key:
            return f"The element: {arr[i]}\nFound at index:{i}"
    # When for loop is complete without returning it means the element does not exist in the array
    return "Element not found"


arr = []
for i in range(int(input("Enter the no of elements for the array: "))):
    arr.append(int(input()))
key = int(input("Enter the element you want to find: "))
result = linearSearch(arr, key)
print(result)

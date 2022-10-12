def recursivelinearsearch(arr, key, current_element_index=0):
    # Base case for recursion
    if current_element_index == len(arr)-1 and arr[current_element_index] != key:
        return "Element not found."
    # Comparing the current element with the key
    elif arr[current_element_index] == key:
        return "The element found at index:{current_element_index}"
    # Recursing for each and every element
    else:
        return recursivelinearsearch(arr, key, current_element_index=current_element_index+1)


arr = []
# Initialization of the array
for i in range(int(input("Enter the no of elements for you array: "))):
    arr.append(int(input()))
# Setting the key
key = int(input("Enter the element you want to find: "))
result = recursivelinearsearch(arr, key)
print(result)

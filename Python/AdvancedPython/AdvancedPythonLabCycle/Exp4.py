def sortDict():
    names = {}
    n = int(input('Enter number of names: '))
    for i in range(n):
        names[i + 1] = input(f'Enter name {i + 1}: ')
    print(f"The dict before sorting is: {names}")
    position = int(input("Enter a position based on which we are going to sort the dict: "))
    # Using lambda function to rearrange the items of dict and recreating the dict
    sorted_dict = {item[0]: item[1] for item in sorted(names.items(), key=lambda x: x[1][position])}
    print(f"The dictionary after sorting the names based on the position is: ", sorted_dict)

# The function contains a dict comprehension, for more on dict comprehension visit
# https://www.geeksforgeeks.org/python-dictionary-comprehension/


if __name__ == "__main__":
    sortDict()

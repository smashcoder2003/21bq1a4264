if __name__ == "__main__":
    names = {}
    n = int(input('Enter number of names'))
    for i in range(n):
        names[i + 1] = input('Enter a name')
    position = int(input("Enter a position based on which we are going to sort the dict: "))
    sorted_dict = {item[0]: item[1] for item in sorted(names.items() , key=lambda x: x[1][position])}
    print(f"The dictionary after sorting the names based on the position is: ", sorted_dict)

names = {1: "Rama",
         2: "Ravi",
         3: "Raju"}
position = 2
result = {element[0]: element[1] for element in sorted(names.items(), key=lambda x: x[position-1][2])}
print(result)

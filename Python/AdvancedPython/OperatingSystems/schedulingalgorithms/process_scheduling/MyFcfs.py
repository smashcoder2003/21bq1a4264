# Function To Create a Table for FCFS
def CreateTable():
    hashmap = {}
    no_of_process = int(input("Enter the no of processes: "))
    for i in range(no_of_process):
        # Enter the process_values in the format '<PID> space <Arrival Time> space <Burst Time>'
        process_values = input(f"Enter the values for PID{i + 1}: ").split()
        process_values = [process_values[0]] + list(map(int, process_values[1:]))
        hashmap[process_values[0]] = [process_values[1], process_values[2], 0, 0, 0]
    return hashmap


# Function to calculate the table for FCFS
def CalculateTable(hashmap):
    hashmap = {item: val for item, val in sorted(hashmap.items(), key=lambda item: item[1][0])}
    list = [x for x in hashmap]

    for i in range(len(list)):
        if i == 0:
            hashmap[list[i]][2] = hashmap[list[i]][0] + hashmap[list[i]][1]
        else:
            hashmap[list[i]][2] = hashmap[list[i - 1]][2] + hashmap[list[i]][1]
        hashmap[list[i]][3] = hashmap[list[i]][2] - hashmap[list[i]][0]
        hashmap[list[i]][4] = hashmap[list[i]][3] - hashmap[list[i]][1]
    return hashmap


# Function to display the hashmap in Table Format.
def PrintTable(hashmap):
    list = ['PID', 'ARRIVAL TIME', 'BURST TIME', 'COMPLETION TIME', 'TURN AROUND TIME', 'WAITING TIME']
    for x in list:
        print(x, end="\t")
    print()
    # Adjusting the values to align perfectly.
    for pid, values in hashmap.items():
        print(pid, str(values[0]).rjust(len(list[0]) * 3),
              str(values[1]).rjust(len(list[1])),
              str(values[2]).rjust(len(list[1])),
              str(values[3]).rjust(len(list[2]) + 5),
              str(values[4]).rjust(len(list[2]) * 2))

    avg_waiting_time = 0
    avg_turnaround_time = 0

    for x in hashmap.values():
        avg_waiting_time += x[4]
        avg_turnaround_time = x[3]

    avg_waiting_time /= len(hashmap)
    avg_turnaround_time /= len(hashmap)
    print(f"\navg_waiting_time: {avg_waiting_time}")
    print(f"avg_turnaround_time: {avg_turnaround_time}")


def fcfs_non_pre_emptive():
    Mytable1 = CreateTable()
    Mytable1 = CalculateTable(Mytable1)
    PrintTable(Mytable1)


fcfs_non_pre_emptive()

# Python3 program to implement Shortest Remaining Time First
# Shortest Remaining Time First (SRTF)

# Function to find the waiting time
# for all processes
def fwt(processes, n, wt):
    btcopy = [0] * n
    # Copy the burst time into rt[]
    for i in range(n):
        btcopy[i] = processes[i][1]
    no_of_completed_processes = 0
    t = 0
    min_time = 999999999
    short = 0
    flag = False

    while no_of_completed_processes != n:
        for j in range(n):
            if ((processes[j][2] <= t) and
                    (btcopy[j] < min_time) and btcopy[j] > 0):
                min_time = btcopy[j]
                short = j
                flag = True
        if not flag:
            t += 1
            continue

        btcopy[short] -= 1

        min_time = btcopy[short]
        if min_time == 0:
            min_time = 999999999

        if btcopy[short] == 0:

            no_of_completed_processes += 1
            flag = False

            fint = t + 1

            [short] = (fint - proc[short][1] -
                       proc[short][2])

            if wt[short] < 0:
                wt[short] = 0

        t += 1


# Function to calculate turn around time
def find_tat(processes, n, wt, tat):
    # Calculating turnaround time
    for i in range(n):
        tat[i] = processes[i][1] + wt[i]


# Function to calculate average waiting
# and turn-around times.
def avgtimetaken(processes, n):
    wt = [0] * n
    tat = [0] * n

    # Function to find waiting time
    # of all processes
    fwt(processes, n, wt)

    # Function to find turn around time
    # for all processes
    find_tat(processes, n, wt, tat)

    # Display processes along with all details
    print("Processes Burst Time	 Waiting",
          "Time	 Turn-Around Time")
    total_wt = 0
    total_tat = 0
    for i in range(n):
        total_wt = total_wt + wt[i]
        total_tat = total_tat + tat[i]
        print(" ", processes[i][0], "\t\t",
              processes[i][1], "\t\t",
              wt[i], "\t\t", tat[i])

    print("\nAverage waiting time = %.5f " % (total_wt / n))
    print("Average turn around time = ", total_tat / n)


# Driver code
if __name__ == "__main__":
    # Process id's
    proc = [[1, 6, 1], [2, 8, 1],
            [3, 7, 2], [4, 3, 3]]
    n = 4
    avgtimetaken(proc, n)

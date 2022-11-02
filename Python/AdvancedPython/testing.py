import time

# to find the summation of series of 1 + 2+ 3+ ... +n


def summation(n):
    if not n % 2:
        return (((n//2)+((n//2)+1))*n//2)
    return ((((n-1) // 2) + (((n-1) // 2) + 1)) * (n-1) // 2) + n


start_time = time.time()
for i in range(1, 100000):
    summation(i)
end_time = time.time()
# The time taken for execution < (0.5) seconds
print("The time taken for execution is: ", (end_time - start_time))
n = int(input("Enter a positive number: "))
print("The summation of series 1-n is: ", summation(n))

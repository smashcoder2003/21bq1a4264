import sys
import threading
from .testing import  DiningPhilosophers
global dp
def maxSubArraySum(a):
    max_so_far = -sys.maxsize - 1
    max_ending_here = 0

    for i in range(len(a)):
        max_ending_here = max_ending_here + a[i]
        if max_so_far < max_ending_here:
            max_so_far = max_ending_here

        if max_ending_here < 0:
            max_ending_here = 0
    return max_so_far


# Driver function to check the above function


a = [-2, -3, 17]

print("Maximum contiguous sum is", maxSubArraySum(a))

# This code is contributed by _Devesh Agrawal_

if __name__ == '__main__':
    t = threading.Thread(target=dp.wantsToEat,
                         args=(6, pickLeftFork, pickRightFork, eat, putLeftFork, putRightFork))
import sys
"""
Constraints:
  1 <= len(nums) <= 10^4
  1 <= nums[i] <= 10^4
"""


def secondLargest(nums: list[int]) -> int:
    first: int = -1 # -sys.max_size - 1
    second: int = -1 # -sys.max_size - 1
    for num in nums:
        if num > first:
            second = first
            first = num

        elif first > num > second:
            second = num

    return second


# Doesn't work when there are duplicates
def secondLargest2(nums: list[int]):
    first = max(nums)

    nums.remove(first)

    return max(nums, default= -1)


def secondLargest3(nums: list[int]) -> int:
    nums.sort()
    length = len(nums)

    for i in range(length - 2, -1, -1):
        if nums[i] != nums[-1]:
            return nums[i]
    return -1


if __name__ == '__main__':
    nums = [2, 1, 2]
    print(secondLargest3(nums))
    print(secondLargest(nums))
    print(secondLargest2(nums))

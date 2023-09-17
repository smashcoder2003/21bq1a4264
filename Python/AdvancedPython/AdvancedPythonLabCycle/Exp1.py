def checkVowels(s: str):
    vowels = ['a', 'e', 'i', 'o', 'u']
    for x in s.lower():
        if x in vowels:
            vowels.remove(x)

    if not vowels:
        print("ALL VOWELS ARE IN THE STRING")
    else:
        print("ALL VOWELS ARE NOT IN THE STRING")

# Time complexity O(N)
# Considering the remove method time complexity is O(N^2)
# Space complexity O(1)


if __name__ == '__main__':
    checkVowels('educatin')

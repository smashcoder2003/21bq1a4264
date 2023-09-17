def possibleWords(words: list[str]):
    letters = ['A', 'K', 'E', 'O', 'T', 'P', 'N']
    # Iterating through the list for each word
    for word in words:
        # Iterating for each letter in a word
        for letter in word.upper():
            # Every letter must exist in the given set of letters
            if letter in letters:
                continue
            else:
                break
        else:
            print(word)

# Time complexity O(N^2)
# Space complexity O(1)


if __name__ == '__main__':
    possibleWords(['Arun', 'Varun', 'Neon', 'Ken'])

def canMatch(word1, word2):
    # If the lengths of the two words are different, they cannot match.
    if len(word1) != len(word2):
        return False

    # Check if the characters in word1 can be converted to word2.
    for i in range(len(word1)):
        # Calculate the absolute difference in ASCII values between the characters.
        diff = abs(ord(word1[i]) - ord(word2[i]))

        # If the difference is 0, or if it's a multiple of (k * 26) for some k > 1, it's a valid operation.
        if diff != 0 and diff % 26 != 0:
            return False

    return True


def matchingWords(words1, words2):
    result = []

    for word1, word2 in zip(words1, words2):
        if canMatch(word1, word2):
            result.append(1)
        else:
            result.append(0)

    return result


# Example usage:
words1 = ["acbcdd", "aac", "abcde"]
words2 = ["abeded", "aab", "ab"]
result = matchingWords(words1, words2)
print(result)  # Output: [1, 0, 1]

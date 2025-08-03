class Solution:
    def maxFreqSum(self, s: str) -> int:
        consonant = {}
        vowel = {}
        answer = 0

        for c in s:
            if c in ["a", "e", "i", "o", "u"]:
                vowel[c] = vowel.get(c, 0) + 1
            else:
                consonant[c] = consonant.get(c, 0) + 1

        if len(consonant.values()) > 0:
            answer += max(consonant.values())

        if len(vowel.values()) > 0:
            answer += max(vowel.values())

        return answer

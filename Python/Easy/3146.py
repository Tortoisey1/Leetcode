class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        # use a hashmap to store the index position of a character
        temp = {}
        answer = 0
        # fill the dictionary
        for i in range(len(s)):
            temp[s[i]] = i

        # compare with the other string
        for i in range(len(t)):
            holder = abs(temp[t[i]] - i)
            answer += holder

        return answer

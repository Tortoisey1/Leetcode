class Solution:
    def kthCharacter(self, k: int) -> str:
        # starting word is a
        # length always doubles, the word to be added is just the previous word added and the corresponding representation of that
        # s(n) = s(n-1) + shifted S(n-1)
        # need find whats the length of the left half

        if k == 1:
            return "a"

        left_length = 1
        while left_length * 2 < k:
            left_length *= 2

        char = self.kthCharacter(k - left_length)
        return chr(ord(char) + 1)
    
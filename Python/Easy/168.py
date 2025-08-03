class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        answer = []

        while columnNumber > 0:
            columnNumber -= 1
            remainder = columnNumber % 26  # this is the lsb

            answer.append(chr(ord("A") + remainder))

            columnNumber //= 26

        return "".join(reversed(answer))

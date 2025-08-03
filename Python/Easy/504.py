class Solution:
    def convertToBase7(self, num: int) -> str:
        # base case
        if num == 0:
            return "0"

        answer = []
        temp = num

        if num < 0:
            temp = num * -1

        while temp != 0:
            remainder = temp % 7
            quotient = temp // 7
            temp = quotient

            answer.append(str(remainder))

        if num < 0:
            answer.append("-")

        answer = "".join(reversed(answer))

        return answer

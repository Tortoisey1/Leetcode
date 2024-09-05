class Solution:
    def findComplement(self, num: int) -> int:
        answer = 0
        multiply = 1

        while (num > 0):
            binary = num % 2
            if (binary == 0):
                answer += multiply

            multiply *= 2
            num //= 2

        return answer

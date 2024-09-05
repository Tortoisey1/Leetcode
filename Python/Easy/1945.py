class Solution:
    def getLucky(self, s: str, k: int) -> int:
        totalSum = sum(int(digit) for char in s for digit in str(ord(char) - ord("a") + 1))

        while k > 1:
            temp = 0

            while totalSum > 0:
                temp += totalSum % 10
                totalSum //= 10

            totalSum = temp
            k -= 1

        return totalSum

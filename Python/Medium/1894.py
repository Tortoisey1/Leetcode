class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        sum = 0
        for i in chalk:
            sum += i

        k %= sum

        count = 0
        while k >= chalk[count]:
            k -= chalk[count]
            count += 1

        return count

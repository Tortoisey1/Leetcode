class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        # greedy approach just take the smallest number first
        count, sum = 0, 0

        for i in range(1, n + 1):
            if i in banned:
                continue

            if i + sum <= maxSum:
                sum += i
                count += 1
            else:
                break

        return count

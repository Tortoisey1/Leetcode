class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        # brute force
        # use a new temp array to store the subarray sums
        temp = []

        # fill the array
        for i in range(n):
            sum = 0
            for j in range(i, n):
                sum += nums[j]
                temp.append(sum)

        # sort the temp array
        temp.sort()

        # go through the array to get the answer
        answer = 0
        mod = 10**9 + 7
        for i in range(left - 1, right):
            answer = (answer + temp[i]) % mod

        return answer

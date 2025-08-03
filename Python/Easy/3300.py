class Solution:
    def minElement(self, nums: List[int]) -> int:
        min = 45  # max nums[i] is 10000 so max sum is from 9999 which is 36

        for num in nums:
            sum = 0
            while num > 0:
                sum += num % 10
                num //= 10

            if sum < min:
                min = sum

        return min

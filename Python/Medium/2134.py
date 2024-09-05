class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        # use sliding window technique
        # modulo to solve the circular problem
        # total ones first
        totalOnes = 0
        for num in nums:
            if num:
                totalOnes += 1

        # edge case of 0 ones or all ones
        if (totalOnes == len(nums)) or (totalOnes == 0):
            return 0

        # first window
        currentOnes = 0

        for i in range(totalOnes):
            if nums[i]:
                currentOnes += 1

        maxOnes = currentOnes

        # sliding window
        for i in range(1, len(nums)):
            # left index
            if nums[i - 1]:
                currentOnes -= 1

            # right index
            if nums[(i + totalOnes - 1) % len(nums)]:
                currentOnes += 1

            maxOnes = max(maxOnes, currentOnes)

        return totalOnes - maxOnes

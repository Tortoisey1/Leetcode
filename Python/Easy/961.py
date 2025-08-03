class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        # the repeated element just need find the one that occurs twice
        # just use a set
        
        freq = set()
        for i in range(0, len(nums)):
            if nums[i] in freq:
                return nums[i]

            freq.add(nums[i])

        return -1

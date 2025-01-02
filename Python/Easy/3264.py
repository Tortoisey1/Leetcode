class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for i in range(k):
            min = 0
            for j in range(1, len(nums)):
                if nums[j] < nums[min]:
                    min = j
            nums[min] *= multiplier

        return nums

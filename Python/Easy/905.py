class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        # is a linear time complexity method

        first_odd = 0
        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                temp = nums[first_odd]
                nums[first_odd] = nums[i]
                nums[i] = temp

                first_odd += 1

        return nums

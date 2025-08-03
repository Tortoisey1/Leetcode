class Solution:
    def transformArray(self, nums: List[int]) -> List[int]:
        # basically put even number in front and odd number behind
        # use a 2 pointer in place approach
        first_odd = 0

        num_len = len(nums)

        for i in range(0, num_len):
            if nums[i] % 2 == 0:
                # swap the numbers
                nums[i] = 1
                nums[first_odd] = 0

                first_odd += 1
            else:
                nums[i] = 1

        return nums

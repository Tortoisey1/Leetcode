class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        count = 0
        len_nums = len(nums)
        for i in range(0, len_nums):
            for j in range(i + 1, len_nums):
                if (nums[i] == nums[j]) and (i * j) % k == 0:
                    count += 1

        return count

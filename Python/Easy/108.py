# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        # build from the middle
        answer = self.sort(nums, left=0, right=len(nums) - 1)

        return answer

    def sort(self, nums: List[int], left, right):
        if left > right:
            return None

        middle = (left + right) // 2

        # sort left
        tree_left = self.sort(nums, left, middle - 1)

        # then sort right
        tree_right = self.sort(nums, middle + 1, right)

        answer = TreeNode(val=nums[middle], left=tree_left, right=tree_right)
        return answer

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        # check left
        depth_left = self.maxDepth(root.left)

        # check right
        depth_right = self.maxDepth(root.right)

        answer = max(depth_left, depth_right)+1

        return answer

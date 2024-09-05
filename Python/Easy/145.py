# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        answer = []

        # postorder is left right then current
        # left
        answer.extend(self.postorderTraversal(root.left))

        # right
        answer.extend(self.postorderTraversal(root.right))

        # current
        answer.append(root.val)

        return answer

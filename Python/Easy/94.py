# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # inorder traversal travel left current then right
        # base case
        if root is None:
            return []
        answer = []

        # traverse the left side
        answer.extend(self.inorderTraversal(root.left))

        # add current value
        answer.append(root.val)

        # traverse the right side
        answer.extend(self.inorderTraversal(root.right))

        return answer

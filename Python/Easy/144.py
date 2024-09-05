# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        # preorder traversal is current left then right

        answer = []

        # current
        answer.append(root.val)

        # left
        answer.extend(self.preorderTraversal(root.left))

        # right
        answer.extend(self.preorderTraversal(root.right))

        return answer

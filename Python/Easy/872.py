# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        # just dffs the left and right tree
        tree1 = []
        tree2 = []

        self.dfs(root1, tree1)
        self.dfs(root2, tree2)

        return tree1 == tree2

    def dfs(self, root, arr):
        if root == None:
            return
        if root.left == None and root.right == None:
            arr.append(root.val)
            return

        self.dfs(root.left, arr)
        self.dfs(root.right, arr)

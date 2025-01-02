# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        # bfs

        # empty tree
        if root is None:
            return list()

        answer = list()
        answer.append(root.val)

        q = list()
        q.append(root)

        while len(q):
            max = -(2**31)

            qSize = len(q)
            for i in range(qSize):
                holder = q.pop(0)

                if holder.left:
                    q.append(holder.left)
                    max = max if (max > holder.left.val) else holder.left.val

                if holder.right:
                    q.append(holder.right)
                    max = max if (max > holder.right.val) else holder.right.val

            if len(q):
                answer.append(max)

        return answer

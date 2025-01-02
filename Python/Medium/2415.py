# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # bfs
        q = list()
        q.append(root)
        lvl = 0

        while q:
            qSize = len(q)
            if lvl % 2 == 1:
                values = [node.val for node in q]
                values.reverse()

                # Assign reversed values back to the nodes
                for i in range(qSize):
                    q[i].val = values[i]

            for _ in range(qSize):
                temp = q.pop(0)

                if temp.left != None:
                    q.append(temp.left)

                if temp.right != None:
                    q.append(temp.right)

            lvl += 1

        return root

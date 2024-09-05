"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""


class Solution:
    def postorder(self, root: "Node") -> List[int]:
        # base case
        if root is None:
            return []

        # post order means go left then right then current node

        answer = []

        holder = root.children
        for children in holder:
            temp = self.postorder(children)
            answer.extend(temp)

        # add current value to list
        answer.append(root.val)
        return answer

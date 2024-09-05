"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""


class Solution:
    def preorder(self, root: "Node") -> List[int]:
        if root is None:
            return []

        # preorder means add current node then go through children
        answer = [root.val]

        childrens = root.children
        for child in childrens:
            answer.extend(self.preorder(child))

        return answer

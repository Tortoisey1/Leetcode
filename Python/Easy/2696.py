class Solution:
    def minLength(self, s: str) -> int:
        # use a greedy approach with a stack
        stack = []

        for c in s:
            if ("C" in stack) or ("A" in stack):
                if (c == "D" and stack[-1] == "C") or (c == "B" and stack[-1] == "A"):
                    stack.pop()
                else:
                    stack.append(c)
            else:
                stack.append(c)

        return len(stack)

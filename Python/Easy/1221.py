class Solution:
    def balancedStringSplit(self, s: str) -> int:
        answer = count = 0
        for c in s:
            if c == "L":
                count += 1
            else:
                count -= 1
            if count == 0:
                answer += 1

        return answer

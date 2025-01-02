class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        # no need care about the permutation
        # but need care when closing bracket encounter
        # if there is no more opening bracket need add a count to the answer
        # if there is still opening bracket at the end need add to the answer
        countOpen = 0
        answer = 0

        for c in s:
            if c == "(":
                countOpen += 1
            else:
                if countOpen > 0:
                    countOpen -= 1
                else:
                    answer += 1

        return answer + countOpen

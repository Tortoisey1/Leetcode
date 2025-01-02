class Solution:
    def minimumSteps(self, s: str) -> int:
        # is just bubble sort
        # count number of blacks before white represents number of swaps needed
        answer = 0
        black = 0

        for c in s:
            if c == "1":  # black
                black += 1
            else:  # white
                answer += black

        return answer

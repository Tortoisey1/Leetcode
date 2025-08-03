class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        # do a greedy approach where from left to right if is I fill from 0 and if is D fill from n+1
        # can do greedy because the left I is always lesser than the right items
        # D is always greater than the right items
        answer = []
        max = len(s)
        min = 0

        for i in range(0, len(s)):
            if s[i] == "I":
                answer.append(min)
                min += 1
            else:
                answer.append(max)
                max -= 1

        if s[len(s) - 1] == "I":
            answer.append(max)
        else:
            answer.append(min)

        return answer

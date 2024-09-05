class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        score = 0
        for i in operations:
            if i[1] == "-":
                score -= 1
            else:
                score += 1

        return score

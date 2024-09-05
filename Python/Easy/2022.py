class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        # check size
        if m * n != len(original):
            return []

        answer = [[0] * n for _ in range(m)]

        for i in range(m):
            for j in range(n):
                answer[i][j] = original[i * n + j]

        return answer

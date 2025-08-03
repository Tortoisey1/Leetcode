class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        m = len(mat)
        n = len(mat[0])

        # base case
        if m * n != r * c:
            return mat

        new_r = 0
        new_c = 0
        answer = []
        answer.append([])

        for i in range(0, m):
            for j in range(0, n):
                # transition to new row for the new answer
                if new_c == c:
                    new_c = 0
                    new_r += 1
                    answer.append([])

                answer[new_r].append(mat[i][j])
                new_c += 1

        return answer

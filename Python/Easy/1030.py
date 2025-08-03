class Solution:
    def allCellsDistOrder(
        self, rows: int, cols: int, rCenter: int, cCenter: int
    ) -> List[List[int]]:
        # brute force, store both the distance and the coord
        # use modulo 101 to make it postiive
        answer = []

        for r in range(rows):
            for c in range(cols):
                dist = abs(r - rCenter) + abs(c - cCenter)
                answer.append((dist, [r, c]))

        answer.sort(key=lambda x: x[0])

        return [ans for _, ans in answer]

class Solution:
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        count = 0
        row = len(grid)
        col = len(grid[0])

        for r in range(row - 2):
            for c in range(col - 2):
                if self.isMagicSquare(grid, r, c):
                    count += 1

        return count

    def isMagicSquare(self, grid, row, col):
        # use a frequency map to store distinct
        # check the number range
        freq = [False] * 10
        for i in range(3):
            for j in range(3):
                temp = grid[row + i][col + j]
                if temp < 1 or temp > 9 or freq[temp]:
                    return False

                freq[temp] = True

        # check diagonal
        # use diagonal as main sum to compare
        diagonal1 = grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2]
        diagonal2 = grid[row + 2][col] + grid[row + 1][col + 1] + grid[row][col + 2]

        if diagonal1 != diagonal2:
            return False

        # check col
        for i in range(3):
            if (
                grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i]
            ) != diagonal1:
                return False

        # check row
        for i in range(3):
            if (
                grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2]
            ) != diagonal1:
                return False

        return True

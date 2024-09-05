class Solution {
    public int numMagicSquaresInside(int[][] grid) {
        int count = 0;
        int row = grid.length;
        int col = grid[0].length;

        for (int i = 0; i < row - 2; i++) {
            for (int j = 0; j < col - 2; j++) {
                if (isMagicSquare(grid, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }

    public boolean isMagicSquare(int[][] grid, int row, int col) {
        // check distinct
        // check range of values
        boolean[] freq = new boolean[10];
        int temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                temp = grid[row + i][col + j];
                if (temp < 1 || temp > 9 || freq[temp]) {
                    return false;
                }
                freq[temp] = true;
            }
        }

        // check diagonals
        // hold diagonal1 as the main sum to compare

        int diagonal1 = grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2];
        int diagonal2 = grid[row + 2][col] + grid[row + 1][col + 1] + grid[row][col + 2];

        if (diagonal1 != diagonal2) {
            return false;
        }

        // check row
        int r;
        for (int i = 0; i < 3; i++) {
            r = grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2];
            if (r != diagonal1) {
                return false;
            }

        }

        // check col

        int c;
        for (int i = 0; i < 3; i++) {
            c = grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i];
            if (c != diagonal1) {
                return false;
            }
        }

        return true;
    }
}
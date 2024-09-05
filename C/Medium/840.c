bool isMagicSquare(int **grid, int row, int col)
{
    // check if the numbers are in range of 1 to 9 first
    // check distinct using a frequency map
    int *map = calloc(10, sizeof(int));
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[row + i][col + j] < 1 || grid[row + i][col + j] > 9 ||
                map[grid[row + i][col + j]] > 0)
            {
                return false;
            }
            map[grid[row + i][col + j]] = 1;
        }
    }

    // hold the diagonal as the main sum to compare
    // compare the diagonals
    int diagonal1 =
        grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2];

    int diagonal2 =
        grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col];

    if (diagonal1 != diagonal2)
    {
        return false;
    }
    // compare the rows
    int r;
    for (int i = 0; i < 3; i++)
    {
        r = grid[row + i][col] + grid[row + i][col + 1] +
            grid[row + i][col + 2];
        if (r != diagonal1)
        {
            return false;
        }
    }

    // compare the column
    int c;
    for (int i = 0; i < 3; i++)
    {
        c = grid[row][col + i] + grid[row + 1][col + i] +
            grid[row + 2][col + i];
        if (c != diagonal1)
        {
            return false;
        }
    }

    return true;
}

int numMagicSquaresInside(int **grid, int gridSize, int *gridColSize)
{
    // brute force approach
    int count = 0;
    for (int i = 0; i < gridSize - 2; i++)
    {
        for (int j = 0; j < *gridColSize - 2; j++)
        {
            if (isMagicSquare(grid, i, j))
            {
                count++;
            }
        }
    }

    return count;
}
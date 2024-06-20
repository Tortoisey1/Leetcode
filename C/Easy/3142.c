bool satisfiesConditions(int **grid, int gridSize, int *gridColSize)
{
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < *gridColSize; j++)
        {
            if (i < gridSize - 1)
            { // can check below
                if (grid[i][j] != grid[i + 1][j])
                {
                    return false;
                }
            }

            if (j < *gridColSize - 1)
            { // can check right
                if (grid[i][j] == grid[i][j + 1])
                {
                    return false;
                }
            }
        }
    }

    return true;
}
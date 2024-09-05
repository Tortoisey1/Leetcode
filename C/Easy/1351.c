int countNegatives(int **grid, int gridSize, int *gridColSize)
{
    int count = 0;
    int size = *gridColSize;
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (grid[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}
int islandPerimeter(int **grid, int gridSize, int *gridColSize)
{
    int answer = 0;

    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < *gridColSize; j++)
        {
            if (grid[i][j] == 1)
            {
                // check left
                if (i == 0 || grid[i - 1][j] == 0)
                {
                    answer++;
                }

                // check right
                if (i == gridSize - 1 || grid[i + 1][j] == 0)
                {
                    answer++;
                }

                // check top
                if (j == 0 || grid[i][j - 1] == 0)
                {
                    answer++;
                }

                // check bottom
                if (j == *gridColSize - 1 || grid[i][j + 1] == 0)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}
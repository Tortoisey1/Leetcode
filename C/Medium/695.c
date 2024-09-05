bool checkBoundary(int gridSize, int *gridColSize, int x, int y)
{
    // check x
    if (x < 0 || x >= gridSize)
    {
        return false;
    }

    // check y
    if (y < 0 || y >= *gridColSize)
    {
        return false;
    }

    return true;
}

int dfs(int **grid, int gridSize, int *gridColSize, int x, int y)
{
    if (!checkBoundary(gridSize, gridColSize, x, y))
    {
        return 0;
    }

    int answer = 0;

    // island exists
    if (grid[x][y] == 1)
    {
        // change the value so that the island is already visited and wont
        // double count
        grid[x][y] = 0;

        // check left
        answer += dfs(grid, gridSize, gridColSize, x - 1, y);

        // check right
        answer += dfs(grid, gridSize, gridColSize, x + 1, y);

        // check up
        answer += dfs(grid, gridSize, gridColSize, x, y - 1);

        // check down
        answer += dfs(grid, gridSize, gridColSize, x, y + 1);
        answer++;
    }

    return answer;
}

int maxAreaOfIsland(int **grid, int gridSize, int *gridColSize)
{
    int answer = 0;

    int currentSize;
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < *gridColSize; j++)
        {
            if (grid[i][j] == 1)
            {
                currentSize = dfs(grid, gridSize, gridColSize, i, j);
                answer = (currentSize > answer) ? currentSize : answer;
            }
        }
    }

    return answer;
}
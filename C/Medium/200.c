bool boundaries(int i, int j, int gridSize, int *gridColSize)
{
    return (i >= 0) && (i < gridSize) && (j >= 0) && (j < *gridColSize);
}

void dfs(int i, int j, char **grid, int gridSize, int *gridColSize)
{
    if (!boundaries(i, j, gridSize, gridColSize))
    {
        return;
    }

    if (grid[i][j] == '1')
    {
        grid[i][j] = '2';
        // up
        dfs(i, j + 1, grid, gridSize, gridColSize);
        // down
        dfs(i, j - 1, grid, gridSize, gridColSize);
        // left
        dfs(i + 1, j, grid, gridSize, gridColSize);
        // right
        dfs(i - 1, j, grid, gridSize, gridColSize);
    }
}

int numIslands(char **grid, int gridSize, int *gridColSize)
{
    int answer = 0;
    // use dfs
    // run through the grid
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < *gridColSize; j++)
        {
            if (grid[i][j] == '1')
            {
                answer++;
                dfs(i, j, grid, gridSize, gridColSize);
            }
        }
    }
    return answer;
}
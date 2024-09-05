int findChampion(int **grid, int gridSize, int *gridColSize)
{
    // just have to find the array with n-1 1
    int count;
    int *team;
    int size = *gridColSize;
    for (int i = 0; i < gridSize; i++)
    {
        team = grid[i];
        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (team[i])
            {
                count++;
            }
        }
        if (count == gridSize - 1)
        {
            return i;
        }
    }
    return -1;
}
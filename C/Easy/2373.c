

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int max(int first, int second)
{
    if (first >= second)
    {
        return first;
    }
    return second;
}

int matrixMax(int **grid, int x, int y)
{
    int answer = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer = max(answer, grid[x + i][y + j]);
        }
    }

    return answer;
}

int **largestLocal(int **grid, int gridSize, int *gridColSize, int *returnSize,
                   int **returnColumnSizes)
{
    int n = gridSize;

    // initialise answer array
    int **answer = malloc((n - 2) * sizeof(int *));
    for (int i = 0; i < (n - 2); i++)
    {
        answer[i] = malloc((n - 2) * sizeof(int));
    }

    // loop through the entire array
    for (int j = 0; j < (n - 2); j++)
    {
        for (int k = 0; k < (n - 2); k++)
        {
            answer[j][k] = matrixMax(grid, j, k);
        }
    }

    *returnSize = (n - 2);
    *returnColumnSizes = malloc(n * sizeof(int));
    for (int i = 0; i < (n - 2); i++)
    {
        (*returnColumnSizes)[i] = n - 2;
    }
    return answer;
}
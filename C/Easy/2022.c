/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **construct2DArray(int *original, int originalSize, int m, int n,
                       int *returnSize, int **returnColumnSizes)
{
    // check if possible first
    // m multiply n should at least be originalSize
    if (m * n != originalSize)
    {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    int **answer = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        answer[i] = malloc(n * sizeof(int));
    }

    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < n; k++)
        {
            answer[j][k] = original[j * n + k];
        }
    }

    *returnSize = m;
    (*returnColumnSizes) = malloc(m * sizeof(int));
    for (int l = 0; l < m; l++)
    {
        (*returnColumnSizes)[l] = n;
    }

    return answer;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *rowAndMaximumOnes(int **mat, int matSize, int *matColSize,
                       int *returnSize)
{
    int max = 0;
    int row = 0;

    int count;
    for (int i = 0; i < matSize; i++)
    {
        count = 0;
        for (int j = 0; j < *matColSize; j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            row = i;
            if (max == matColSize)
            {
                break;
            }
        }
    }

    int *answer = malloc(2 * sizeof(int));
    answer[0] = row;
    answer[1] = max;
    *returnSize = 2;
    return answer;
}
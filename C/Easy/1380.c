/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *luckyNumbers(int **matrix, int matrixSize, int *matrixColSize,
                  int *returnSize)
{
    // matrixSize is m colsize is n
    int count = 0;
    int min;
    int cond;
    int col;
    int *answer = malloc((50 * 50) * sizeof(int));

    for (int i = 0; i < matrixSize; i++)
    {
        min = matrix[i][0];
        col = 0;
        cond = 1;

        // minimum of the row
        for (int j = 1; j < *matrixColSize; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                col = j;
            }
        }

        // check if is the maximum
        for (int k = 0; k < matrixSize; k++)
        {
            if (k == i)
            {
                continue;
            }
            if (matrix[k][col] > min)
            {
                cond = 0;
                break;
            }
        }

        // check condition, add to answer
        if (cond)
        {
            answer[count] = min;
            count++;
        }
    }

    *returnSize = count;
    return answer;
}
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    // first and last number is always 1
    // the rest is addition of the top 2 number
    if (numRows < 1)
    {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }
    int **answer = malloc(numRows * sizeof(int *));
    answer[0] = malloc(sizeof(int));
    answer[0][0] = 1;

    // allocate the returnColumnSizes
    *returnColumnSizes = malloc(numRows * sizeof(int));
    (*returnColumnSizes)[0] = 1;

    for (int i = 1; i < numRows; i++)
    {
        answer[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        // first number is 1
        answer[i][0] = 1;

        for (int j = 1; j < i; j++)
        {
            answer[i][j] = answer[i - 1][j - 1] + answer[i - 1][j];
        }

        // last number is 1
        answer[i][i] = 1;
    }

    *returnSize = numRows;
    return answer;
}
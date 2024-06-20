/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{
    // create the table
    int *table = malloc((numsSize + 1) * sizeof(int));
    for (int i = 0; i <= numsSize; i++)
    {
        table[i] = 0;
    }

    int temp;

    int *answer = NULL;
    *returnSize = 0;

    // fill the table
    for (int j = 0; j < numsSize; j++)
    {
        temp = nums[j];
        table[temp] = 1;
    }

    // check the table
    for (int k = 1; k <= numsSize; k++)
    {
        if (!table[k])
        { // number did not appear so the table value is 0
            if (!(*returnSize))
            { // no array is formed yet
                answer = malloc(1 * sizeof(int));
                answer[0] = k;
                (*returnSize)++;
            }
            else
            {
                answer = realloc(answer, (*returnSize + 1) * sizeof(int));
                answer[*returnSize] = k;
                (*returnSize)++;
            }
        }
    }

    return answer;
}
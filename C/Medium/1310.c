/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *xorQueries(int *arr, int arrSize, int **queries, int queriesSize,
                int *queriesColSize, int *returnSize)
{
    // brute force
    // no need check the queries indixes
    int *answer = malloc(queriesSize * sizeof(int));

    int temp, left, right;
    for (int i = 0; i < queriesSize; i++)
    {
        left = queries[i][0];
        right = queries[i][1];
        temp = arr[left++];
        for (int j = left; j <= right; j++)
        {
            temp ^= arr[j];
        }
        answer[i] = temp;
    }

    *returnSize = queriesSize;
    return answer;
}
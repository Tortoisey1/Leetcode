/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    int size = 2 * numsSize;
    int *answer = malloc(size * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        answer[i] = nums[i];
    }

    for (int i = 0; i < numsSize; i++)
    {
        answer[numsSize + i] = nums[i];
    }
    *returnSize = size;
    return answer;
}
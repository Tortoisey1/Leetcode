/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *buildArray(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int *answer = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        answer[i] = nums[nums[i]];
    }
    return answer;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    int *answer = malloc(numsSize * sizeof(int));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        answer[count] = nums[i];
        count++;
        answer[count] = nums[n + i];
        count++;
    }

    *returnSize = numsSize;
    return answer;
}
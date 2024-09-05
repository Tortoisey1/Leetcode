/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *leftRightDifference(int *nums, int numsSize, int *returnSize)
{
    int *answer = malloc(numsSize * sizeof(int));
    int temp;
    int left = 0;
    int right = 0;
    // get the right sum
    for (int i = 1; i < numsSize; i++)
    {
        right += nums[i];
    }
    answer[0] = right;
    for (int i = 1; i < numsSize; i++)
    {
        right -= nums[i];
        left += nums[i - 1];
        temp = left - right;
        if (temp < 0)
        {
            temp *= -1;
        }
        answer[i] = temp;
    }

    *returnSize = numsSize;
    return answer;
}
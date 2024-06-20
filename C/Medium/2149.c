/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *rearrangeArray(int *nums, int numsSize, int *returnSize)
{
    // use 2 pointers to allocate answer
    int *answer = malloc(numsSize * sizeof(int));

    int positive = 0;
    int negative = 1;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0)
        {
            answer[positive] = nums[i];
            positive += 2;
        }
        else
        {
            answer[negative] = nums[i];
            negative += 2;
        }
    }

    *returnSize = numsSize;

    return answer;
}
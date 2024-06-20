/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *applyOperations(int *nums, int numsSize, int *returnSize)
{
    // first pass to do the first operation
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    int pointer = 0;
    // shift the 0s to the back
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[pointer++] = nums[i];
        }
    }

    for (int i = pointer; i < numsSize; i++)
    {
        nums[i] = 0;
    }

    *returnSize = numsSize;

    return nums;
}
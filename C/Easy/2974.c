/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int *numberGame(int *nums, int numsSize, int *returnSize)
{
    // sort the array
    // then just swap every 2 elements
    qsort(nums, numsSize, sizeof(int), cmp);

    int temp;
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
        i++;
    }

    *returnSize = numsSize;

    return nums;
}
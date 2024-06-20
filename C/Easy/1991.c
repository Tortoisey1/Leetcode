int findMiddleIndex(int *nums, int numsSize)
{
    // use prefix sum technique
    int sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        nums[i] = sum;
    }

    if (nums[numsSize - 1] - nums[0] == 0)
    {
        return 0;
    }

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i - 1] == nums[numsSize - 1] - nums[i])
        {
            return i;
        }
    }

    return -1;
}
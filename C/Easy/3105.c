int longestMonotonicSubarray(int *nums, int numsSize)
{
    // both is strictly so no =
    int max = 1;
    int count = 1;
    // check increasing first
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            count = 0;
        }
        count++;
        if (count > max)
        {
            max = count;
        }
    }

    count = 1;
    // then check decreasing
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] >= nums[i - 1])
        {
            count = 0;
        }
        count++;
        if (count > max)
        {
            max = count;
        }
    }

    return max;
}
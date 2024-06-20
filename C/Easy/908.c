int smallestRangeI(int *nums, int numsSize, int k)
{
    // find the minimum and maximum
    // return 0 if the difference is negative since the number to be deducted is
    // just in range of -k to k

    int min = nums[0];
    int max = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }

        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    int diff = (max - k) - (min + k);

    return (0 > diff) ? 0 : diff;
}
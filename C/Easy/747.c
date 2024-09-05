int dominantIndex(int *nums, int numsSize)
{
    // just store the index to save space
    int max = -1;
    int small = -1;

    for (int i = 0; i < numsSize; i++)
    {
        if (max == -1 || nums[i] > nums[max])
        {
            small = max;
            max = i;
        }
        else if (small == -1 || nums[i] > nums[small])
        {
            small = i;
        }
    }

    if (nums[max] < 2 * nums[small])
    {
        return -1;
    }

    return max;
}
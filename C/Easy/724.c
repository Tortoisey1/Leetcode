int pivotIndex(int *nums, int numsSize)
{
    // get the sum first
    // then just slide to the right

    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }

    int left = 0;
    int right = sum;
    // start sliding
    for (int i = 0; i < numsSize; i++)
    {
        right -= nums[i];
        if (i != 0)
        {
            left += nums[i - 1];
        }
        if (left == right)
        {
            return i;
        }
    }

    return -1;
}
int arraySign(int *nums, int numsSize)
{
    // just count number of negative numbers
    // even means pos else odd
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < 0)
        {
            count++;
        }
        else if (nums[i] == 0)
        {
            return 0;
        }
    }

    return (count % 2 == 0) ? 1 : -1;
}
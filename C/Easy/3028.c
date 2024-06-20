int returnToBoundaryCount(int *nums, int numsSize)
{
    int count = 0;
    int value = 0;
    for (int i = 0; i < numsSize; i++)
    {
        value += nums[i];
        if (value == 0)
        {
            count++;
        }
    }
    return count;
}
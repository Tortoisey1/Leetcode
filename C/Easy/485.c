int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int max = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > max)
        {
            max = count;
        }
    }

    return max;
}
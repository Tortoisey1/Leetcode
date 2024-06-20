

int minOperations(int *nums, int numsSize)
{
    int count = 0;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            count += 1 + nums[i - 1] - nums[i];
            nums[i] = nums[i - 1] + 1;
        }
    }

    return count;
}
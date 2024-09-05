int minimumOperations(int *nums, int numsSize)
{
    int count = 0;
    int remainder;

    for (int i = 0; i < numsSize; i++)
    {
        remainder = nums[i] % 3;
        if (remainder != 0)
        {
            count += 1; // always 1 away from being divisible by 3
        }
    }

    return count;
}
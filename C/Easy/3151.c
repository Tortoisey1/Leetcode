bool isArraySpecial(int *nums, int numsSize)
{
    if (numsSize > 1)
    {
        if ((nums[0] % 2) == (nums[1] % 2))
        {
            return false;
        }
    }

    for (int i = 1; i < numsSize - 1; i++)
    {
        if (((nums[i] % 2) == (nums[i - 1] % 2) ||
             (nums[i] % 2) == (nums[i + 1] % 2)))
        {
            return false;
        }
    }

    return true;
}
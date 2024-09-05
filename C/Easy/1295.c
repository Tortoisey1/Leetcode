int findNumbers(int *nums, int numsSize)
{
    int count = 0;
    int sum;
    int temp;
    for (int i = 0; i < numsSize; i++)
    {
        sum = 0;
        temp = nums[i];
        while (temp > 0)
        {
            sum++;
            temp /= 10;
        }
        if (sum % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
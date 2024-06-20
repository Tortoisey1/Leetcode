int sumOfEncryptedInt(int *nums, int numsSize)
{
    int sum = 0;

    int count;
    int temp;
    int digit;
    int holder;
    for (int i = 0; i < numsSize; i++)
    {
        count = 0;
        temp = nums[i];
        digit = 0;
        // get encryption
        while (temp > 0)
        {
            holder = temp % 10;
            if (holder > digit)
            {
                digit = holder;
            }
            count++;
            temp /= 10;
        }
        // build encrypted
        while (count > 0)
        {
            temp *= 10;
            temp += digit;
            count--;
        }
        sum += temp;
    }

    return sum;
}
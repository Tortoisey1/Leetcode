int countDistinctIntegers(int *nums, int numsSize)
{
    // use a frequency array
    int *freq = calloc(1000001, sizeof(int));

    int num;
    int temp;
    // fill the frequency array
    for (int i = 0; i < numsSize; i++)
    {
        freq[nums[i]]++;
        temp = 0;
        num = nums[i];

        // reverse the number
        while (num > 0)
        {
            temp *= 10;
            temp += (num % 10);
            num /= 10;
        }
        freq[temp]++;
    }

    // check freq array
    int count = 0;
    for (int i = 1; i < 1000001; i++)
    {
        if (freq[i])
        {
            count++;
        }
    }
    return count;
}
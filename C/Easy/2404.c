int mostFrequentEven(int *nums, int numsSize)
{
    // use frequency array
    int *freq = calloc(100001, sizeof(int));

    // fill the array
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            freq[nums[i]]++;
        }
    }

    int answer = -1;
    int count = 0;
    // check the array
    for (int i = 0; i < 100001; i++)
    {
        if (i % 2 == 0)
        {
            if (freq[i] > count)
            {
                count = freq[i];
                answer = i;
            }
        }
    }

    return answer;
}
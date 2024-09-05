int mostFrequent(int *nums, int numsSize, int key)
{
    // use a frequency array to store the count
    int *freq = malloc(1001 * sizeof(int));
    for (int i = 0; i < 1001; i++)
    {
        freq[i] = 0;
    }

    // fill the frequency array by going through nums
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == key)
        {
            freq[nums[i + 1]]++;
        }
    }

    int count = freq[1];
    int answer = 1;
    // check the frequency array
    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] > count)
        {
            count = freq[i];
            answer = i;
        }
    }

    return answer;
}
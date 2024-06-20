int findLengthOfLCIS(int *nums, int numsSize)
{
    // use a sliding window technique
    int count = 1;
    int answer = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            if (count > answer)
            {
                answer = count;
            }
            count = 0;
        }
        count++;
    }
    if (count > answer)
    {
        answer = count;
    }

    return answer;
}
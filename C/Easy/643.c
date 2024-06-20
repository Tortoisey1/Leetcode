double findMaxAverage(int *nums, int numsSize, int k)
{
    // find the largest sum of k subarray
    int left = 0;
    int right = 0;
    double sum = 0;
    double max;

    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
        right++;
    }

    max = sum;
    while (right < numsSize)
    {
        sum -= nums[right - k];
        sum += nums[right];
        if (sum > max)
        {
            max = sum;
        }
        right++;
    }

    return max / k;
}
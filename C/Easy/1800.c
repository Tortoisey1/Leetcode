int maxAscendingSum(int *nums, int numsSize)
{
    // use sliding window technique
    int sum = nums[0];
    int right = 1;
    int max = sum;

    while (right < numsSize)
    {
        if (nums[right] <= nums[right - 1])
        { // subarray is no longer ascending
            sum = 0;
        }
        sum += nums[right];
        if (sum > max)
        {
            max = sum;
        }
        right++;
    }

    return max;
}
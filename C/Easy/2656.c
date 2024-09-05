int maximizeSum(int *nums, int numsSize, int k)
{
    // find max in the array
    int max = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    int answer = 0;
    answer = (k / 2.0) * (max + max + k - 1);

    return answer;
}
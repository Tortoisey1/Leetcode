int differenceOfSum(int *nums, int numsSize)
{
    int element = 0;
    int digits = 0;
    int temp;
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        element += nums[i];
        while (temp > 0)
        {
            digits += temp % 10;
            temp /= 10;
        }
    }
    int answer;
    answer = element - digits;
    if (answer < 0)
    {
        answer *= -1;
    }

    return answer;
}
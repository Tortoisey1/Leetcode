int findClosestNumber(int *nums, int numsSize)
{
    int answer = nums[0];

    int temp;
    int temp2;
    for (int i = 1; i < numsSize; i++)
    {
        temp = answer;
        if (temp < 0)
        {
            temp *= -1;
        }
        temp2 = nums[i];
        if (temp2 < 0)
        {
            temp2 *= -1;
        }
        if (temp2 < temp)
        {
            answer = nums[i];
        }
        else if (temp2 == temp)
        {
            if (nums[i] > answer)
            {
                answer = nums[i];
            }
        }
    }

    return answer;
}
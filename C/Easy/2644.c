int maxDivScore(int *nums, int numsSize, int *divisors, int divisorsSize)
{
    int answer = INT_MAX;
    int max = INT_MIN;
    int count;
    for (int i = 0; i < divisorsSize; i++)
    {
        count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[j] % divisors[i] == 0)
            {
                count++;
            }
        }

        if (count == max)
        {
            if (divisors[i] < answer)
            {
                answer = divisors[i];
            }
        }
        else if (count > max)
        {
            answer = divisors[i];
            max = count;
        }
    }

    return answer;
}
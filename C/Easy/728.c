/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool selfDividing(int num)
{
    int temp = num;
    while (temp > 0)
    {
        if (temp % 10 == 0)
        {
            return false;
        }
        if (num % (temp % 10) != 0)
        {
            return false;
        }
        temp /= 10;
    }

    return true;
}

int *selfDividingNumbers(int left, int right, int *returnSize)
{
    int *answer = malloc(10001 * sizeof(int));
    int count = 0;

    for (int i = left; i <= right; i++)
    {
        if (selfDividing(i))
        {
            answer[count] = i;
            count++;
        }
    }

    *returnSize = count;
    return answer;
}
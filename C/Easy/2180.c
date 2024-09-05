int countEven(int num)
{
    int count = 0;
    int sum;
    int temp;
    for (int i = 2; i <= num; i++)
    {
        sum = 0;

        temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
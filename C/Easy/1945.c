int getLucky(char *s, int k)
{
    // count the sum of digit directly so k=1 from the start
    int len = strlen(s);
    long long sum = 0;
    long long temp;

    int num;

    for (int i = 0; i < len; i++)
    {
        num = (s[i] - 'a' + 1);

        // consider multi digit alphabets
        if (num >= 10)
        {
            sum += num / 10;
        }

        sum += num % 10;
    }

    while (k > 1)
    {
        temp = 0;
        while (sum > 0)
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
        k -= 1;
    }

    return sum;
}
int addDigits(int num)
{
    // recursive approach
    // base case single digit
    if (num < 10)
    {
        return num;
    }

    // else extract the sum of digit then call again
    int sum = 0;

    while (num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    return addDigits(sum);
}
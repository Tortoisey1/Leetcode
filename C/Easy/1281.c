int subtractProductAndSum(int n)
{
    long sum = 0;
    long product = 1;
    // get the digits
    while (n > 0)
    {
        sum += (n % 10);
        product *= (n % 10);
        n /= 10;
    }

    return product - sum;
}
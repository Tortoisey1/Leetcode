

int tribonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    int *r = malloc((n + 1) * sizeof(int));
    r[0] = 0;
    r[1] = 1;
    r[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        r[i] = r[i - 3] + r[i - 2] + r[i - 1];
    }
    return r[n];
}
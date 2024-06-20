int climbStairs(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int *r = malloc((n + 1) * sizeof(int));
    r[0] = 1;
    r[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        r[i] = r[i - 1] + r[i - 2];
    }

    return r[n];
}
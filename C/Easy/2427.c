int commonFactors(int a, int b)
{
    int count = 1;
    // use the biggest one to check
    int big = (a > b) ? a : b;
    int small = (a < b) ? a : b;

    for (int i = 2; i <= small; i++)
    {
        if ((big % i == 0) && (small % i == 0))
        {
            count++;
        }
    }

    return count;
}
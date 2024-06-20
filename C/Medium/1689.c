int minPartitions(char *n)
{
    // find the largest digit
    int max = n[0] - '0';
    int len = strlen(n);

    for (int i = 0; i < len; i++)
    {
        if (n[i] - '0' > max)
        {
            max = n[i] - '0';
        }
    }

    return max;
}
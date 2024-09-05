int maxPower(char *s)
{
    int max = 1;
    int count;
    int len = strlen(s);

    for (int i = 0; i < len - 1; i++)
    {
        count = 0;
        while ((s[i] == s[i + 1]) && i < len - 1)
        {
            count++;
            i++;
        }
        count++;
        if (count > max)
        {
            max = count;
        }
    }

    return max;
}
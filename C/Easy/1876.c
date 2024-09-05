int countGoodSubstrings(char *s)
{
    int count = 0;

    int len = strlen(s);
    for (int i = 0; i < len - 2; i++)
    {
        if ((s[i] != s[i + 1]) && (s[i + 1] != s[i + 2]) &&
            (s[i] != s[i + 2]))
        {
            count++;
        }
    }

    return count;
}
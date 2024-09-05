int countKeyChanges(char *s)
{
    int len = strlen(s);
    int count = 0;
    int bef;
    int now;
    for (int i = 1; i < len; i++)
    {
        // get bef
        if (s[i - 1] >= 'A' && s[i - 1] <= 'Z')
        {
            bef = s[i - 1] - 'A';
        }
        else
        {
            bef = s[i - 1] - 'a';
        }

        // get now
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            now = s[i] - 'A';
        }
        else
        {
            now = s[i] - 'a';
        }

        // compare
        if (bef != now)
        {
            count++;
        }
    }
    return count;
}
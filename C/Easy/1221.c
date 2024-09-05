int balancedStringSplit(char *s)
{
    int count = 0;
    int temp = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'R')
        {
            temp++;
        }
        else
        {
            temp--;
        }
        if (temp == 0)
        {
            count++;
        }
    }

    return count;
}
int percentageLetter(char *s, char letter)
{
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == letter)
        {
            count++;
        }
    }
    count *= 100;
    count /= len;
    return count;
}
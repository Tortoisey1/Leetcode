char *truncateSentence(char *s, int k)
{
    char temp;
    int count = 0;
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
        if (count == k)
        {
            s[i] = '\0';
        }
    }
    return s;
}
char *replaceDigits(char *s)
{
    int len = strlen(s);
    int temp;
    char c;
    for (int i = 1; i < len; i++)
    {
        temp = s[i] - '0';
        c = s[i - 1] + temp;
        s[i] = c;

        i++;
    }

    return s;
}
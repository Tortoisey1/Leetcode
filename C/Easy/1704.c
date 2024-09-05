bool halvesAreAlike(char *s)
{
    int first = 0;
    int second = 0;
    int len = strlen(s);
    int len1 = len / 2;
    // count first
    for (int i = 0; i < len1; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U')
        {
            first++;
        }
    }

    // count second
    for (int i = len1; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U')
        {
            second++;
        }
    }

    // check
    if (first != second)
    {
        return false;
    }
    return true;
}
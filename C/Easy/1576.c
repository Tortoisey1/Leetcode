char *modifyString(char *s)
{
    // just going to change everything to alternate a and b or c
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '?')
        {
            for (char ch = 'a'; ch <= 'c'; ch++)
            { // only need a b c
                // Check before and after to avoid same adjacent characters
                if ((i == 0 || s[i - 1] != ch) &&
                    (i == len - 1 || s[i + 1] != ch))
                {
                    s[i] = ch;
                    break;
                }
            }
        }
    }

    return s;
}
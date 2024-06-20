bool isAnagram(char *s, char *t)
{
    // use a frequency table for both
    int *freqS = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freqS[i] = 0;
    }

    int *freqT = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freqT[i] = 0;
    }

    int len = strlen(s);
    // fill the table
    for (int i = 0; i < len; i++)
    {
        freqS[s[i] - 'a']++;
    }

    len = strlen(t);
    for (int i = 0; i < len; i++)
    {
        freqT[t[i] - 'a']++;
        ;
    }

    // check the table
    for (int i = 0; i < 26; i++)
    {
        if (freqT[i] != freqS[i])
        {
            return false;
        }
    }

    return true;
}
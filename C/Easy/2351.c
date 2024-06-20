char repeatedCharacter(char *s)
{
    // use a freq array
    // then check back again
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    // fill array
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        freq[s[i] - 'a']++;
        if (freq[s[i] - 'a'] >= 2)
        {
            return s[i];
        }
    }

    return 'a';
}
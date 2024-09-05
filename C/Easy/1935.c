int canBeTypedWords(char *text, char *brokenLetters)
{
    // store broken in frequency array
    int len = strlen(brokenLetters);
    if (len == 26)
    {
        return 0;
    }

    // create the frequency array
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    // fill the table
    for (int i = 0; i < len; i++)
    {
        freq[brokenLetters[i] - 'a']++;
    }

    int cond;
    int count = 0;
    len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        cond = 1;
        while (text[i] != ' ' && i < len)
        {
            if (freq[text[i] - 'a'])
            {
                cond = 0;
            }
            i++;
        }
        if (cond)
        {
            count++;
        }
    }

    return count;
}
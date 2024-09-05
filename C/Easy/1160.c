int countCharacters(char **words, int wordsSize, char *chars)
{
    // use a frequency array to store the chars
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    int len = strlen(chars);
    // fill the array
    for (int i = 0; i < len; i++)
    {
        freq[chars[i] - 'a']++;
    }

    int count = 0;
    // freq array for the words
    int *freq2 = malloc(26 * sizeof(int));

    int cond;
    char *word;
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        len = strlen(word);
        cond = 1;
        for (int i = 0; i < 26; i++)
        {
            freq2[i] = 0;
        }
        // fill freq2
        for (int i = 0; i < len; i++)
        {
            freq2[word[i] - 'a']++;
        }

        // check freq2
        for (int i = 0; i < 26; i++)
        {
            if (freq2[i] > freq[i])
            {
                cond = 0;
                break;
            }
        }
        if (cond)
        {
            count += len;
        }
    }

    return count;
}
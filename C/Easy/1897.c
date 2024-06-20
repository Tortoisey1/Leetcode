bool makeEqual(char **words, int wordsSize)
{
    // each character frequency must be divisible by wordsSize
    // use a frequency array to check
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    char *word;
    int len;
    // fill the array
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        len = strlen(word);
        for (int i = 0; i < len; i++)
        {
            freq[word[i] - 'a']++;
        }
    }

    // check the array
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % wordsSize != 0)
        {
            return false;
        }
    }

    return true;
}
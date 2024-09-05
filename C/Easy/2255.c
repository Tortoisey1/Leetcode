int countPrefixes(char **words, int wordsSize, char *s)
{
    int count = 0;
    char *word;
    int len = strlen(s);
    int wordLen;
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        if (strlen(word) > len)
        { // word longer than s
            continue;
        }
        wordLen = strlen(word);
        // check the prefix by looping through word
        for (int i = 0; i < wordLen; i++)
        {
            if (word[i] != s[i])
            {
                break;
            }
            if (i == wordLen - 1)
            {
                count++;
            }
        }
    }

    return count;
}
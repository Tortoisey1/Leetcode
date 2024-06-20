int prefixCount(char **words, int wordsSize, char *pref)
{
    int count = 0;

    char *word;
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        if (strlen(pref) > strlen(word))
        { // prefix longer than word
            continue;
        }
        else
        {
            for (int i = 0; i < strlen(pref); i++)
            {
                if (word[i] != pref[i])
                {
                    break;
                }
                if (i == strlen(pref) - 1)
                {
                    count++;
                }
            }
        }
    }

    return count;
}
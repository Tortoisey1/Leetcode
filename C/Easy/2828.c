bool isAcronym(char **words, int wordsSize, char *s)
{
    if (strlen(s) != wordsSize)
    {
        return false;
    }

    int count = 0;
    char *temp;
    for (int i = 0; i < wordsSize; i++)
    {
        temp = words[i];
        if (temp[0] != s[count])
        {
            return false;
        }
        count++;
    }
    return true;
}
int numOfStrings(char **patterns, int patternsSize, char *word)
{
    int count = 0;
    int lenP;
    int lenW = strlen(word);
    char *pattern;
    int temp;
    int cond;
    for (int i = 0; i < patternsSize; i++)
    {
        pattern = patterns[i];
        lenP = strlen(pattern);
        for (int j = 0; j < lenW; j++)
        {
            temp = 0;
            cond = 0;
            for (int k = 0; k < lenP; k++)
            {
                if (temp + j > lenW)
                {
                    break;
                }
                if (pattern[k] != word[temp + j])
                {
                    break;
                }
                temp++;
                if (k == lenP - 1)
                {
                    cond = 1;
                    break;
                }
            }
            if (cond)
            {
                count++;
                break;
            }
        }
    }

    return count;
}
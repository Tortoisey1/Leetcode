int isPrefixOfWord(char *sentence, char *searchWord)
{
    int count = 1;
    int lenS = strlen(sentence);
    int lenW = strlen(searchWord);
    int cond;
    for (int i = 0; i < lenS; i++)
    {
        if (sentence[i] == searchWord[0])
        { // first letter
            cond = 1;
            for (int j = 1; j < lenW; j++)
            {
                if (i + j >= lenS)
                {
                    cond = 0;
                    break;
                }
                if (sentence[i + j] != searchWord[j])
                {
                    cond = 0;
                    break;
                }
            }
            if (cond)
            {
                return count;
            }
        }
        else
        { // go next word
            while (sentence[i] != ' ' && i < lenS)
            {
                i++;
            }
            count++;
        }
    }
    return -1;
}
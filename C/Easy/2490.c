bool isCircularSentence(char *sentence)
{
    int len = strlen(sentence);
    // check the last ch of the last word and first ch of first word
    if (sentence[0] != sentence[len - 1])
    {
        return false;
    }

    for (int i = 1; i < len; i++)
    {
        if (sentence[i] == ' ')
        {
            if (sentence[i - 1] != sentence[i + 1])
            {
                return false;
            }
        }
    }

    return true;
}
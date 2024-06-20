int mostWordsFound(char **sentences, int sentencesSize)
{
    int max = 0;
    int sum;
    char *sentence;
    int len;
    for (int i = 0; i < sentencesSize; i++)
    {
        sum = 0;
        sentence = sentences[i];
        len = strlen(sentence);
        for (int j = 0; j < len; j++)
        {
            if (sentence[j] == ' ')
            {
                sum++;
            }
        }
        // account for the last word so wont hit any space
        sum++;
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}
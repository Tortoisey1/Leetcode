char *reversePrefix(char *word, char ch)
{
    int length = strlen(word);
    char *answer = malloc((length + 1) * sizeof(char));

    int cond = 0;

    for (int i = 0; i < length; i++)
    {
        if (word[i] == ch)
        {
            cond = i;
            break;
        }
    }

    if (cond)
    {
        for (int j = 0; j <= cond; j++)
        {
            answer[j] = word[cond - j];
        }
        for (int k = cond + 1; k < length; k++)
        {
            answer[k] = word[k];
        }
    }
    else
    {
        return word;
    }
    answer[length] = '\0';

    return answer;
}
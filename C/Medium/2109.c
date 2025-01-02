char *addSpaces(char *s, int *spaces, int spacesSize)
{
    int lenS = strlen(s);
    int newLen = lenS + spacesSize + 1;
    char *answer = malloc(newLen * sizeof(char));

    // keep track of which index at in string s
    int j = 0;

    // keep track of which index at in the new string
    int k = 0;

    for (int i = 0; i < spacesSize; i++)
    {
        while (j < spaces[i])
        {
            answer[k++] = s[j];
            j++;
        }
        answer[k++] = ' ';
    }

    // any remaining characters
    while (j < lenS)
    {
        answer[k++] = s[j];
        j++;
    }

    answer[k] = '\0';
    return answer;
}
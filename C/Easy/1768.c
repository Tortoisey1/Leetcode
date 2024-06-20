char *mergeAlternately(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int count1 = 0;
    int count2 = 0;
    int current = 0;
    char *answer = malloc((len1 + len2 + 1) * sizeof(char));

    while (count1 < len1)
    {
        // add word1 char to answer
        answer[current] = word1[count1];
        current++;
        count1++;
        // check if still have second word characters to be added
        if (count2 < len2)
        {
            answer[current] = word2[count2];
            current++;
            count2++;
        }
    }
    // check if still have second word
    while (count2 < len2)
    {
        answer[current] = word2[count2];
        current++;
        count2++;
    }

    answer[len1 + len2] = '\0';
    return answer;
}
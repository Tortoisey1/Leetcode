/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **commonChars(char **words, int wordsSize, int *returnSize)
{
    // create the hashtable for each word
    int **table =
        malloc(26 * sizeof(int *)); // only 26 cause only lowercase letters
    for (int i = 0; i < 26; i++)
    {
        table[i] = malloc(wordsSize * sizeof(int));
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < wordsSize; j++)
        {
            table[i][j] = 0;
        }
    }

    char *word;
    int temp;
    // fill the table
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        // get the frequency of the letter in the word
        for (int j = 0; j < strlen(word); j++)
        {
            temp = word[j] - 'a';
            table[temp][i]++;
        }
    }

    char **answer = malloc(100 * sizeof(char *));
    int min;
    int count = 0;
    // iterate through the table
    for (int i = 0; i < 26; i++)
    {
        min = table[i][0];
        for (int j = 1; j < wordsSize; j++)
        {
            if (table[i][j] < min)
            {
                min = table[i][j];
            }
        }
        if (min == 0)
        { // lowest frequency is that it does not exist
            continue;
        }
        else
        { // if frequency exist, must add to the answer
            for (int k = 0; k < min; k++)
            {
                answer[count] = malloc(2 * sizeof(char));
                answer[count][0] = 'a' + i;
                answer[count][1] = '\0';
                count++;
            }
        }
    }
    *returnSize = count;
    return answer;
}

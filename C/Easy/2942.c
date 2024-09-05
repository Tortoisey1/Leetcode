/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findWordsContaining(char **words, int wordsSize, char x, int *returnSize)
{
    int *answer = malloc(50 * sizeof(int));
    int count = 0;

    char *word;
    int len;
    for (int i = 0; i < wordsSize; i++)
    {
        word = words[i];
        len = strlen(word);
        for (int j = 0; j < len; j++)
        {
            if (word[j] == x)
            {
                answer[count] = i;
                count++;
                break;
            }
        }
    }

    *returnSize = count;
    if (count == 0)
    {
        return NULL;
    }

    return answer;
}
int countConsistentStrings(char *allowed, char **words, int wordsSize)
{
    int count = 0;

    // make hashtable of allowed letters
    int *hashtable = malloc(26 * sizeof(int));
    for (int j = 0; j < 26; j++)
    {
        hashtable[j] = 0;
    }

    int temp;
    // loop through allowed letters
    for (int k = 0; k < strlen(allowed); k++)
    {
        temp = allowed[k] - 'a';
        hashtable[temp] = 1;
    }

    char *word;
    int cond;
    // loop through the array of words
    for (int i = 0; i < wordsSize; i++)
    {
        cond = 1;
        word = words[i];
        // check whether each letter in the word is in the hash table
        for (int j = 0; j < strlen(word); j++)
        {
            temp = word[j] - 'a';
            if (!hashtable[temp])
            {
                cond = 0;
                break;
            }
        }
        if (cond)
        {
            count++;
        }
    }

    return count;
}
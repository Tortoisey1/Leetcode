bool checkIfPangram(char *sentence)
{
    // use frequency table
    int *table = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        table[i] = 0;
    }

    int temp;
    int len = strlen(sentence);
    // fill the table
    for (int i = 0; i < len; i++)
    {
        temp = sentence[i] - 'a';
        table[temp]++;
    }

    // check freq table
    for (int i = 0; i < 26; i++)
    {
        if (!table[i])
        {
            return false;
        }
    }

    return true;
}
int minimizedStringLength(char *s)
{
    // it is just the number of distinct characters
    // use a frequnecy array
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    int temp;
    int len = strlen(s);
    // fill the array
    for (int i = 0; i < len; i++)
    {
        temp = s[i] - 'a';
        freq[temp]++;
    }

    int count = 0;
    // check the array
    for (int i = 0; i < 26; i++)
    {
        if (freq[i])
        {
            count++;
        }
    }

    return count;
}
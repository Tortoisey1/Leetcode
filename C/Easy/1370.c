char *sortString(char *s)
{
    // use frequency table
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    int count = 0;

    // fill table
    int temp;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        temp = s[i] - 'a';
        freq[temp]++;
    }

    // fill back s
    while (count < len)
    {
        // fowards
        for (int i = 0; i < 26; i++)
        {
            if (freq[i])
            {
                s[count] = i + 'a';
                freq[i]--;
                count++;
            }
        }

        // backwards
        for (int i = 25; i >= 0; i--)
        {
            if (freq[i])
            {
                s[count] = i + 'a';
                count++;
                freq[i]--;
            }
        }
    }

    free(freq);

    return s;
}
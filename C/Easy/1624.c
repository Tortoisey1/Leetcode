int maxLengthBetweenEqualCharacters(char *s)
{
    // use a frequency table
    // create the table
    int **freq = malloc(26 * sizeof(int *));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = malloc(2 * sizeof(int));
        freq[i][0] = -1;
        freq[i][1] = -1;
    }

    int temp;
    int len = strlen(s);
    // fill the table
    for (int i = 0; i < len; i++)
    {
        if (freq[s[i] - 'a'][0] != -1)
        {
            freq[s[i] - 'a'][1] = i;
        }
        else
        {
            freq[s[i] - 'a'][0] = i;
        }
    }

    // check the table
    int max = -1;
    for (int i = 0; i < 26; i++)
    {
        temp = 0;
        for (int j = 0; j < 2; j++)
        {
            if (freq[i][1] == -1)
            {
                break;
            }
            temp = freq[i][1] - freq[i][0] - 1;
            if (temp > max)
            {
                max = temp;
            }
        }
    }

    return max;
}
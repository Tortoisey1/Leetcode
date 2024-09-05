bool digitCount(char *num)
{
    // use a frequency array
    int *freq = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    int len = strlen(num);

    // fill the array
    for (int i = 0; i < len; i++)
    {
        freq[num[i] - '0']++;
    }

    // check the array
    for (int i = 0; i < len; i++)
    {
        if (freq[i] != (num[i] - '0'))
        {
            return false;
        }
    }

    free(freq);
    return true;
}
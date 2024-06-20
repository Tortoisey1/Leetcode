char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize)
{
    // create a frequency array for the license plate
    // convevrt to lower case at the same time
    int *freqL = calloc(26, sizeof(int));
    int len = strlen(licensePlate);

    // fill the frequency array for license plate
    for (int i = 0; i < len; i++)
    {
        if (licensePlate[i] >= 'A' && licensePlate[i] <= 'Z')
        { // capital
            freqL[licensePlate[i] - 'A']++;
        }
        else if (licensePlate[i] >= 'a' &&
                 licensePlate[i] <= 'z')
        { // lower case
            freqL[licensePlate[i] - 'a']++;
        }
    }

    int answer = -1;
    char *word;
    bool cond;
    // check the words array
    // answer will store the index directly
    for (int i = 0; i < wordsSize; i++)
    {
        cond = true;
        int *freqW = calloc(26, sizeof(int)); // map for the ch of word
        word = words[i];
        len = strlen(word);
        // fill freqW
        for (int j = 0; j < len; j++)
        {
            freqW[word[j] - 'a']++;
        }

        // check freqW
        for (int k = 0; k < 26; k++)
        {
            if (freqW[k] < freqL[k])
            {
                cond = false;
                break;
            }
        }
        if (cond)
        {
            if (answer == -1)
            {
                answer = i;
            }
            else if (strlen(words[answer]) > len)
            {
                answer = i;
            }
        }

        free(freqW);
    }

    free(freqL);

    return words[answer];
}
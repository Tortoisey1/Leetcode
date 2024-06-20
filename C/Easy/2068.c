bool checkAlmostEquivalent(char *word1, char *word2)
{
    // create a frequency array for the word
    // just need 1 then when filling the second just minus away
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    // fill the freq
    // go through word1 first
    int len = strlen(word1);
    for (int i = 0; i < len; i++)
    {
        freq[word1[i] - 'a']++;
    }

    len = strlen(word2);
    // go through word2
    for (int i = 0; i < len; i++)
    {
        freq[word2[i] - 'a']--;
    }

    // check the frequency array
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 3 || freq[i] < -3)
        {
            return false;
        }
    }

    return true;
}
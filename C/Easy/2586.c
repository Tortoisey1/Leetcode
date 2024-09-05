int vowelStrings(char **words, int wordsSize, int left, int right)
{
    int count = 0;

    char *word;
    int len;
    // start the words array from left and end at right
    for (int i = left; i <= right; i++)
    {
        word = words[i];
        len = strlen(word);
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' ||
            word[0] == 'o' || word[0] == 'u')
        {
            if (word[len - 1] == 'a' || word[len - 1] == 'e' ||
                word[len - 1] == 'i' || word[len - 1] == 'o' ||
                word[len - 1] == 'u')
            {
                count++;
            }
        }
    }

    return count;
}
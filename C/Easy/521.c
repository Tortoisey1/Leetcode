int findLUSlength(char *a, char *b)
{
    // longest uncommon subsequence is just checking if the 2 words are the same
    if (strcmp(a, b) == 0)
    {
        return -1;
    }

    return strlen(a) > strlen(b) ? strlen(a) : strlen(b);
}
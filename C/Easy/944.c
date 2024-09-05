int minDeletionSize(char **strs, int strsSize)
{
    // all str same length
    int count = 0;
    int len = strlen(strs[0]);

    for (int i = 0; i < len; i++)
    { // which letter loop
        for (int j = 1; j < strsSize; j++)
        { // which string in the array
            if (strs[j][i] < strs[j - 1][i])
            {
                count++;
                break;
            }
        }
    }

    return count;
}
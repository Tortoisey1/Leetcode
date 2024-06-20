int minimumPushes(char *word)
{
    // letters are all distinct
    // so just use math
    // 8 possible numbers to be mapped to
    int len = strlen(word);
    if (len <= 8)
    {
        return len;
    }
    else if (len > 16 && len <= 24)
    {
        return 24 + (len - 16) * 3;
    }
    else if (len > 8 && len <= 16)
    {
        return 8 + 2 * (len - 8);
    }

    return 48 + (len - 24) * 4;
}
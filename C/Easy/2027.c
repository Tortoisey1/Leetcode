int minimumMoves(char *s)
{
    int count = 0;
    int len = strlen(s);
    int right = 0;
    while (right < len)
    {
        if (s[right] == 'X')
        {
            count++;
            right += 3;
        }
        else
        {
            right++;
        }
    }

    return count;
}
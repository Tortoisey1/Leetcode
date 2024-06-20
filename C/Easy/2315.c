int countAsterisks(char *s)
{
    int count = 0;

    // when pair is 0 can count as it wont be between pair
    int pair = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '|')
        {
            if (!pair)
            {
                pair++;
            }
            else
            {
                pair--;
            }
        }
        if (s[i] == '*')
        {
            if (pair)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
    }

    return count;
}
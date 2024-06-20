int minTimeToType(char *word)
{
    int count = 0;
    int len = strlen(word);

    int current = 0;
    char temp;
    char c;
    int clock;
    int counter;
    for (int i = 0; i < len; i++)
    {
        temp = 'a' + current;
        c = word[i];
        clock = c - temp;
        if (clock < 0)
        {
            clock *= -1;
        }
        counter = 26 - clock;
        if (counter < clock)
        {
            count += counter;
        }
        else
        {
            count += clock;
        }

        current = word[i] - 'a';
    }
    count += len;

    return count;
}
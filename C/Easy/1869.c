bool checkZeroOnes(char *s)
{
    int len1 = 0;
    int len0 = 0;

    int len = strlen(s);

    int counter = 0;
    // get the len1
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            counter = 0;
        }
        else
        {
            counter++;
            if (counter > len1)
            {
                len1 = counter;
            }
        }
    }

    counter = 0;
    // get len0
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            counter = 0;
        }
        else
        {
            counter++;
            if (counter > len0)
            {
                len0 = counter;
            }
        }
    }

    return len1 > len0;
}
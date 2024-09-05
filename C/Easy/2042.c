bool areNumbersAscending(char *s)
{
    int first = -1;
    int current;
    int len = strlen(s);
    int temp;
    for (int i = 0; i < len; i++)
    {
        temp = 0;
        if (isdigit(s[i]))
        {
            while (s[i] != ' ' && i < len)
            {
                temp *= 10;
                temp += s[i] - '0';
                i++;
            }
            if (first == -1)
            {
                first = temp;
            }
            else
            {
                if (first >= temp)
                {
                    return false;
                }
                else
                {
                    first = temp;
                }
            }
        }
    }
    return true;
}
int maximumValue(char **strs, int strsSize)
{
    int max = 0;

    int len;
    char *str;
    bool chars;
    bool num;
    int sum;
    for (int i = 0; i < strsSize; i++)
    {
        str = strs[i];
        len = strlen(str);
        num = false;
        chars = false;
        sum = 0;
        for (int j = 0; j < len; j++)
        {
            if (isdigit(str[j]))
            {
                num = true;
                sum *= 10;
                sum += str[j] - '0';
            }
            else
            {
                chars = true;
                break;
            }
        }
        if (chars)
        {
            sum = len;
        }
        if (sum > max)
        {
            max = sum;
        }
    }

    return max;
}
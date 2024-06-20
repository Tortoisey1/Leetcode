int titleToNumber(char *columnTitle)
{
    // is in base of 26 similar to binary
    int count = 0;
    int power = 0;
    int temp;
    int len = strlen(columnTitle);
    for (int i = len - 1; i >= 0; i--)
    {
        temp = 1;
        for (int j = 0; j < power; j++)
        {
            temp *= 26;
        }
        count += (columnTitle[i] - 'A' + 1) * temp;
        power++;
    }
    return count;
}
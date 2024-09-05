int scoreOfString(char *s)
{
    int sum = 0;
    int len = strlen(s);
    int diff;
    for (int i = 0; i < len - 1; i++)
    {
        diff = s[i] - s[i + 1];
        if (diff < 0)
        {
            diff *= -1;
        }
        sum += diff;
    }
    return sum;
}
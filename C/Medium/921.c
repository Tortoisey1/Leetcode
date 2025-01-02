int minAddToMakeValid(char *s)
{
    // empty string
    if (s == NULL)
    {
        return true;
    }

    // just need count the number of open brackets
    int answer = 0;
    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            // if open exist means can deduct no more open means must add
            count ? count-- : answer++;
        }
    }

    return count + answer;
}
char *makeFancyString(char *s)
{
    if (strlen(s) <= 2)
    {
        return s;
    }
    // do it inplace using 2 pointer approach
    int curr = 2;  // current pointer on s
    int right = 1; // keep track of new s right
    int len = strlen(s);

    while (curr < len)
    {
        if (s[right] == s[right - 1] && s[right] == s[curr])
        { // 3 consecutive
            curr++;
        }
        else
        {
            right++;
            s[right] = s[curr];
            curr++;
        }
    }

    right++;
    s[right] = '\0';

    return s;
}
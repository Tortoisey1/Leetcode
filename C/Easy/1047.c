char *removeDuplicates(char *s)
{
    // use a 2 pointer approach
    // original array treated as a stack
    // just do it in place//so only compare current left and right
    int len = strlen(s);
    int left = 0;
    int right = 1;

    while (right < len)
    {
        if (left < 0)
        { // empty string
            left = 0;
            s[left] = s[right];
        }
        else if (s[left] == s[right])
        { // duplicate
            left--;
        }
        else
        {
            left++;
            s[left] = s[right];
        }
        right++;
    }

    left++;
    s[left] = '\0';

    return s;
}
int removePalindromeSub(char *s)
{
    // if is palindrome one step else 2 step
    int len = strlen(s);
    int cond = 0;
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            cond = 0;
            break;
        }
        else
        {
            cond = 1;
        }
        left++;
        right--;
    }
    if (cond)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
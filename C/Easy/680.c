bool palindrome(int left, int right, char *s)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool validPalindrome(char *s)
{
    // 2 pointer approach
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            // left remove one or right remove one
            return (palindrome(left + 1, right, s)) ||
                   palindrome(left, right - 1, s);
        }
        left++;
        right--;
    }
    return true;
}
bool isPalindrome(char *s)
{
    int length = strlen(s);
    if (length == 0)
        return true; // Empty string is considered a palindrome

    int front = 0;
    int back = length - 1;

    while (front < back)
    {
        while (!isalnum(s[front]))
        {
            front++;
            if (front >= length)
            {
                return true; // Only non-alphanumeric characters till the end
            }
        }

        while (!isalnum(s[back]))
        {
            back--;
            if (back < 0)
            {
                return true; // Only non-alphanumeric characters till the
                             // beginning
            }
        }

        if (tolower(s[front]) != tolower(s[back]))
        {
            return false;
        }

        front++;
        back--;
    }

    return true;
}
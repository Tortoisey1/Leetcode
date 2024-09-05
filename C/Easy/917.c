char *reverseOnlyLetters(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right)
    {
        if (isalpha(s[left]) == 0)
        { // check if is an alphabet
            left++;
        }
        else if (isalpha(s[right]) == 0)
        {
            right--;
        }
        else
        { // both left and right is alphabet
            temp = s[right];
            s[right] = s[left];
            s[left] = temp;
            left++;
            right--;
        }
    }

    return s;
}
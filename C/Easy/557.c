char *reverseWords(char *s)
{
    // use 2 pointer approach to reverse string
    int len = strlen(s);
    int left = 0;
    int right;
    char temp;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        { // reverse the previous word
            right = i - 1;
            while (left < right)
            {
                temp = s[right];
                s[right] = s[left];
                s[left] = temp;
                left++;
                right--;
            }

            left = i + 1;
        }
    }

    // reverse the last word
    right = len - 1;
    while (left < right)
    {
        temp = s[right];
        s[right] = s[left];
        s[left] = temp;
        left++;
        right--;
    }

    return s;
}
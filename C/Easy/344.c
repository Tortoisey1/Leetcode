void reverseString(char *s, int sSize)
{
    // use 2 pointer approach
    int left = 0;
    int right = sSize - 1;
    char holder;

    while (left < right)
    {
        holder = s[left];
        s[left] = s[right];
        s[right] = holder;
        left++;
        right--;
    }
}
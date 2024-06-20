int maximumLengthSubstring(char *s)
{
    // use a frequency array to store first
    // then use sliding window technique with 2 pointer
    // if encounter more than 2 occurrence shift the left pointer until no more
    int max = 0;
    int left = 0;
    int right = 0;
    int len = strlen(s);
    int *freq = calloc(26, sizeof(int));
    int count = 0;

    while (right < len)
    {
        while (freq[s[right] - 'a'] == 2)
        {
            freq[s[left] - 'a']--;
            left++;
        }
        freq[s[right] - 'a']++;
        count = right - left + 1;
        if (count > max)
        {
            max = count;
        }
        right++;
    }

    return max;
}
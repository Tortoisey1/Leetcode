int lengthOfLongestSubstring(char *s)
{
    // empty string
    if (strlen(s) <= 1)
    {
        return strlen(s);
    }
    // use a sliding window technique and a frequency array to keep track
    // size of array only need to  be 128 as ascii only 128
    // initialise array
    int *freq = malloc(128 * sizeof(int));
    for (int i = 0; i < 128; i++)
    {
        freq[i] = 0;
    }

    int max = 0;
    int len = strlen(s);
    int left = 0;
    int right = 0;

    while (right < len)
    {
        // character is in current substring
        if (freq[s[right]] > 0)
        {
            // move left to the right until can put this new character
            while (freq[s[right]] > 0)
            {
                freq[s[left]]--;
                left++;
            }
        }

        // add the current letter to the substring
        freq[s[right]]++;
        right++;
        if ((right - left) > max)
        {
            max = (right - left);
        }
    }

    free(freq);

    return max;
}
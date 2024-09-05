int rearrangeCharacters(char *s, char *target)
{
    // frequency array for both s and target
    int *freqS = calloc(26, sizeof(int));
    int *freqT = calloc(26, sizeof(int));

    // fill the frequency array
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        freqS[s[i] - 'a']++;
    }

    len = strlen(target);
    for (int i = 0; i < len; i++)
    {
        freqT[target[i] - 'a']++;
    }

    int answer = INT_MAX;
    // check the frequency array
    for (int i = 0; i < 26; i++)
    {
        if (freqT[i])
        { // letter exists in target
            answer =
                ((freqS[i] / freqT[i]) < answer) ? freqS[i] / freqT[i] : answer;
        }
    }

    return answer;
}
char *freqAlphabets(char *s)
{
    // just check if the third index is a # to know which section of alphabet
    char *answer = malloc(1001 * sizeof(char));
    int len = strlen(s);
    int count = 0;
    int temp;
    for (int i = 0; i < len; i++)
    {
        // check if third index is even possible
        if (i + 2 < len)
        { // # got space to be put in
            if (s[i + 2] == '#')
            {
                temp = s[i] - '0';
                temp *= 10;
                i++;
                temp += s[i] - '0';
                i++;
                temp -= 10;
                answer[count] = temp + 'j';
                count++;
            }
            else
            {
                answer[count] = s[i] - '1' + 'a';
                count++;
            }
        }
        else
        { // confirm is no # number
            answer[count] = s[i] - '1' + 'a';
            count++;
        }
    }

    answer[count] = '\0';
    return answer;
}
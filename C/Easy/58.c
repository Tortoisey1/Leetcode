int lengthOfLastWord(char *s)
{
    if (s == NULL || *s == '\0')
    {
        return 0;
    }

    int length = strlen(s);
    int answer = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && answer != 0)
        {
            break;
        }
        else if (s[i] != ' ')
        {
            answer++;
        }
    }

    return answer;
}

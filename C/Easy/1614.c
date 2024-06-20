int max(int first, int second)
{
    if (first >= second)
    {
        return first;
    }
    else
    {
        return second;
    }
}

int maxDepth(char *s)
{
    int answer = 0;
    int counter = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
        {
            counter++;
        }
        else if (s[i] == ')')
        {
            counter--;
        }
        answer = max(answer, counter);
    }

    return answer;
}
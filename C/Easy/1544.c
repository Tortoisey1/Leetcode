char *makeGood(char *s)
{
    // 101 to take into account of terminate character
    char *answer = malloc(101 * sizeof(char));
    int top = 0;

    answer[0] = s[0];

    for (int i = 1; i < strlen(s); i++)
    {
        if (top != -1 && abs(s[i] - answer[top]) == 32)
        {
            top--;
        }
        else
        {
            answer[++top] = s[i];
        }
    }

    answer[++top] = '\0';
    return answer;
}
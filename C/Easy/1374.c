char *generateTheString(int n)
{
    char *answer = malloc((n + 1) * sizeof(char));
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            answer[i] = 'a';
        }
        answer[n - 1] = 'b';
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            answer[i] = 'a';
        }
    }
    answer[n] = '\0';
    return answer;
}
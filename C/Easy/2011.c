int finalValueAfterOperations(char **operations, int operationsSize)
{
    int answer = 0;

    char *word;
    for (int i = 0; i < operationsSize; i++)
    {
        word = operations[i];
        // x in front
        if (word[0] == 'X')
        {
            if (word[1] == '-')
            {
                answer--;
            }
            else
            {
                answer++;
            }
        }
        else
        { // x behind
            if (word[0] == '-')
            {
                answer--;
            }
            else
            {
                answer++;
            }
        }
    }

    return answer;
}
int calPoints(char **operations, int operationsSize)
{
    // use a stack
    double *stack = malloc(1000 * sizeof(double));
    int pointer = 0;

    for (int i = 0; i < operationsSize; i++)
    {
        if (strcmp(operations[i], "+") == 0)
        {
            stack[pointer] = stack[pointer - 1] + stack[pointer - 2];
            pointer++;
        }
        else if (strcmp(operations[i], "D") == 0)
        {
            stack[pointer] = stack[pointer - 1] * 2;
            pointer++;
        }
        else if (strcmp(operations[i], "C") == 0)
        {
            pointer--;
        }
        else
        {
            stack[pointer] = atoi(operations[i]);
            pointer++;
        }
    }
    int sum = 0;
    for (int i = 0; i < pointer; i++)
    {
        sum += stack[i];
    }
    return sum;
}
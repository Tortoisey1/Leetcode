int minLength(char *s)
{
    // greedy approach works
    // can use a stack
    int len = strlen(s);
    int length = 0;
    char *stack = malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        stack[length++] = s[i];

        // check if got 2 things in the stack first
        if (length >= 2)
        {
            if ((stack[length - 1] == 'B' && stack[length - 2] == 'A') ||
                (stack[length - 1] == 'D' && stack[length - 2] == 'C'))
            {
                length -= 2;
            }
        }
    }

    return length;
}
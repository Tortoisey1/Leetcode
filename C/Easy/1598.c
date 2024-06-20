int minOperations(char **logs, int logsSize)
{
    int count = 0;

    for (int i = 0; i < logsSize; i++)
    {
        if (strcmp(logs[i], "./") == 0)
        { // remain in the same folder "./"
            continue;
        }
        else if (logs[i][0] == '.')
        { // go parent folder
            if (count > 0)
            {
                count--;
            }
        }
        else
        { // go child folder
            count++;
        }
    }

    return count;
}
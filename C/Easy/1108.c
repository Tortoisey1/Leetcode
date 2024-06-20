char *defangIPaddr(char *address)
{
    int len = strlen(address);
    len += 7; // for the brackets
    char *answer = malloc(len * sizeof(char));

    int count = 0;
    int originalLen = strlen(address);
    for (int i = 0; i < originalLen; i++)
    {
        if (address[i] == '.')
        {
            answer[count] = '[';
            count++;
            answer[count] = address[i];
            count++;
            answer[count] = ']';
            count++;
        }
        else
        {
            answer[count] = address[i];
            count++;
        }
    }

    answer[count] = '\0';
    return answer;
}
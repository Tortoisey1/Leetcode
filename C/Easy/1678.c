char *interpret(char *command)
{
    char *answer;
    int count = 0;
    answer = malloc(101 * sizeof(char));
    int len = strlen(command);
    for (int i = 0; i < len; i++)
    {
        if (command[i] == 'G')
        { // G
            answer[count] = 'G';
            count++;
        }
        else if (command[i] == '(')
        {
            i++;
            if (command[i] == ')')
            { //()
                answer[count] = 'o';
                count++;
            }
            else
            { //(al)
                i++;
                i++;
                answer[count] = 'a';
                count++;
                answer[count] = 'l';
                count++;
            }
        }
    }

    answer[count] = '\0';
    return answer;
}
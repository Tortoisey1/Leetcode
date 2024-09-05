char *finalString(char *s)
{
    // use 2 pointer approach to reverse a string
    int len = strlen(s);
    char *answer = malloc((len + 1) * sizeof(char));

    int left;
    int right;
    char temp;
    int counter = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'i')
        { // reverse string dont need add i
            left = 0;
            right = counter - 1;
            while (left < right)
            {
                temp = answer[right];
                answer[right] = answer[left];
                answer[left] = temp;
                left++;
                right--;
            }
        }
        else
        {
            answer[counter] = s[i];
            counter++;
        }
    }

    answer[counter] = '\0';

    return answer;
}
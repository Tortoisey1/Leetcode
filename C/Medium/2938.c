long long minimumSteps(char *s)
{
    // is just bubble sort
    // count number of black balls before a white ball is the number of swaps
    // needed
    long long answer = 0;
    long long black = 0;

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        { // black ball
            black++;
        }
        else
        { // white ball
            answer += black;
        }
    }

    return answer;
}
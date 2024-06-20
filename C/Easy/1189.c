int maxNumberOfBalloons(char *text)
{
    // use a frequency array to store balloon
    // b is 0 , a is 1, l is 2, o is 3, n is 4
    int *freq = calloc(5, sizeof(int));

    // fill array
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (text[i] == 'b')
        {
            freq[0]++;
        }
        else if (text[i] == 'a')
        {
            freq[1]++;
        }
        else if (text[i] == 'l')
        {
            freq[2]++;
        }
        else if (text[i] == 'o')
        {
            freq[3]++;
        }
        else if (text[i] == 'n')
        {
            freq[4]++;
        }
    }

    // check array
    int answer = freq[0];
    answer = (freq[1] < answer) ? freq[1] : answer;
    answer = ((freq[2] / 2) < answer) ? freq[2] / 2 : answer;
    answer = ((freq[3] / 2) < answer) ? freq[3] / 2 : answer;
    answer = (freq[4] < answer) ? freq[4] : answer;

    return answer;
}
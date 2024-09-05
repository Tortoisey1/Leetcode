/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **divideString(char *s, int k, char fill, int *returnSize)
{
    char **answer = malloc(100 * sizeof(char *));
    int len = strlen(s);
    int noFill = 0;
    if (len % k != 0)
    { // paddding is the remainder
        noFill = len % k;
    }
    int count = len / k; // number of words to be formed
    int counter = 0;     // counter is to keep track where we are in the string s
    for (int i = 0; i < count; i++)
    {
        answer[i] = malloc((k + 1) * sizeof(char));
        for (int j = 0; j < k; j++)
        {
            answer[i][j] = s[counter];
            counter++;
        }
        answer[i][k] = '\0';
    }

    if (noFill)
    {
        answer[count] = malloc((k + 1) * sizeof(char));
        for (int i = 0; i < noFill; i++)
        { // get the leftover characters from s
            answer[count][i] = s[counter];
            counter++;
        }
        for (int i = noFill; i < k; i++)
        { // start padding
            answer[count][i] = fill;
        }
        answer[count][k] = '\0';
        count++;
    }
    *returnSize = count;
    return answer;
}
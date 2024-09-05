/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **cellsInRange(char *s, int *returnSize)
{
    int row1 = s[1] - '0';
    int row2 = s[4] - '0';
    int col1 = s[0] - 'A';
    int col2 = s[3] - 'A';
    char **answer = malloc(234 * sizeof(char *));
    int count = 0;

    int cols = col2 - col1 + 1;
    int rows = row2 - row1 + 1;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            answer[count] = malloc(3 * sizeof(char));
            answer[count][0] = 'A' + i + col1;
            answer[count][1] = '0' + j + row1;
            answer[count][2] = '\0';
            count++;
        }
    }

    *returnSize = count;
    return answer;
}
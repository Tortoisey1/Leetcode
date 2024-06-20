/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *numberOfLines(int *widths, int widthsSize, char *s, int *returnSize)
{
    int *answer = malloc(2 * sizeof(int));
    int line = 1;
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        count += widths[s[i] - 'a'];
        if (count > 100)
        {
            count = widths[s[i] - 'a'];
            line++;
        }
    }

    answer[0] = line;
    answer[1] = count;
    *returnSize = 2;
    return answer;
}
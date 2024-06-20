/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shortestToChar(char *s, char c, int *returnSize)
{
    // use 2 pass approach
    int len = strlen(s);
    int *answer = malloc(len * sizeof(int));

    int current = -len; // use - will make it pos

    // foward pass
    for (int i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            current = i;
        }
        answer[i] = i - current;
    }

    current = INT_MAX;
    // reverse pass
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            current = i;
        }
        answer[i] = (current - i < answer[i]) ? current - i : answer[i];
    }

    *returnSize = len;
    return answer;
}
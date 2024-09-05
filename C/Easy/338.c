/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *countBits(int n, int *returnSize)
{
    int *answer = malloc((n + 1) * sizeof(int));

    answer[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        { // if is odd add one to previous
            answer[i] = answer[i / 2] + 1;
        }
        else
        {
            answer[i] = answer[i / 2];
        }
    }

    *returnSize = n + 1;
    return answer;
}
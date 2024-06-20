/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sumZero(int n, int *returnSize)
{
    // 1 to n-1
    // then sum to n-1
    int sum = 0;
    int *answer = malloc(n * sizeof(int));
    for (int i = 0; i < n - 1; i++)
    {
        answer[i] = i + 1;
        sum += answer[i];
    }
    answer[n - 1] = -sum;

    *returnSize = n;
    return answer;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *missingRolls(int *rolls, int rollsSize, int mean, int n, int *returnSize)
{
    // find sum of m
    // sum of n is mean*(m+n)- sum of m

    // sum of m
    int sumM = 0;
    for (int i = 0; i < rollsSize; i++)
    {
        sumM += rolls[i];
    }

    int sumTotal = mean * (rollsSize + n);

    // the total sum cannot be less than sum of m + n ones
    // cannot be greater than adding n 6s
    if (sumTotal < sumM + n || sumTotal > sumM + 6 * n)
    {
        *returnSize = 0;
        return NULL;
    }

    int *answer = malloc(n * sizeof(int));
    int sumN = sumTotal - sumM;

    // spread evenly
    for (int j = 0; j < n; j++)
    {
        answer[j] = sumN / n;
    }

    // get the remainder and spread one more time
    int remain = sumN % n;
    for (int k = 0; k < remain; k++)
    {
        answer[k]++;
    }

    *returnSize = n;
    return answer;
}
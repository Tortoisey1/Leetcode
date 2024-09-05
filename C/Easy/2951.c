/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findPeaks(int *mountain, int mountainSize, int *returnSize)
{
    int count = 0;

    int *answer = malloc(98 * sizeof(int));

    for (int i = 1; i < mountainSize - 1; i++)
    {
        if ((mountain[i - 1] < mountain[i]) &&
            (mountain[i] > mountain[i + 1]))
        {
            answer[count] = i;
            count++;
        }
    }

    *returnSize = count;
    return answer;
}
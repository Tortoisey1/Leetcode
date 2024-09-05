/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *replaceElements(int *arr, int arrSize, int *returnSize)
{
    // start backwards so it will only be one pass
    int max = 0;

    int *answer = malloc(arrSize * sizeof(int));

    for (int i = arrSize - 2; i >= 0; i--)
    {
        if (arr[i + 1] > max)
        {
            max = arr[i + 1];
        }

        answer[i] = max;
    }

    answer[arrSize - 1] = -1;

    *returnSize = arrSize;

    return answer;
}
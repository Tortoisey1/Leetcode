int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

bool canMakeArithmeticProgression(int *arr, int arrSize)
{
    // sort the array first
    // then see if difference is constant
    qsort(arr, arrSize, sizeof(int), cmp);
    int diff = arr[1] - arr[0];

    for (int i = 1; i < arrSize - 1; i++)
    {
        if (arr[i + 1] - arr[i] != diff)
        {
            return false;
        }
    }

    return true;
}
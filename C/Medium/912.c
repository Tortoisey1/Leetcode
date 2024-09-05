/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void merge(int *arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    // create temp array
    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    // copy data over to temp arrays
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    // merge the temp array back into main one
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // leftover in L or R
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int *sortArray(int *nums, int numsSize, int *returnSize)
{
    // use merge sort
    mergeSort(nums, 0, numsSize - 1);
    *returnSize = numsSize;
    return nums;
}
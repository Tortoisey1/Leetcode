bool canBeEqual(int *target, int targetSize, int *arr, int arrSize)
{
    // just check whether the elements are the same
    // using a frequency table

    // create table for target
    int *tableT = malloc(1001 * sizeof(int));
    for (int i = 0; i < 1001; i++)
    {
        tableT[i] = 0;
    }

    // create table for arr
    int *tableA = malloc(1001 * sizeof(int));
    for (int i = 0; i < 1001; i++)
    {
        tableA[i] = 0;
    }

    int temp;
    // fill table for target
    for (int i = 0; i < targetSize; i++)
    {
        temp = target[i];
        tableT[temp]++;
    }
    // fill table for arr
    for (int i = 0; i < arrSize; i++)
    {
        temp = arr[i];
        tableA[temp]++;
    }

    // check both
    for (int i = 1; i < 1001; i++)
    {
        if (tableT[i] != tableA[i])
        {
            return false;
        }
    }

    return true;
}
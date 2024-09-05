int numberOfPoints(int **nums, int numsSize, int *numsColSize)
{
    // use a frequency table
    // create it
    int *table = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        table[i] = 0;
    }

    int *temp;
    int start;
    int end;
    // fill the table
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        start = temp[0];
        end = temp[1];
        for (int j = start; j <= end; j++)
        {
            table[j] = 1;
        }
    }

    int count = 0;
    // check table
    for (int i = 1; i < 101; i++)
    {
        if (table[i])
        {
            count++;
        }
    }

    return count;
}
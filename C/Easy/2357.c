int minimumOperations(int *nums, int numsSize)
{
    int count = 0;
    // use a hashtable
    // the number of steps is just number of different elements non-zero

    // create hashtable
    int *table = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        table[i] = 0;
    }

    // fill the table
    int temp;
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        table[temp]++;
    }

    // check the table
    for (int i = 1; i < 101; i++)
    {
        if (table[i])
        {
            count++;
        }
    }

    return count;
}
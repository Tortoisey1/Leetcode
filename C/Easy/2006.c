int countKDifference(int *nums, int numsSize, int k)
{
    // frequency array
    int *table = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        table[i] = 0;
    }

    int temp;
    // fill the table
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        table[temp]++;
    }

    int count = 0;
    // go through table to check for pairs
    for (int i = 1; i < 101; i++)
    {
        if (i + k > 100)
        {
            break;
        }
        count += table[i] * table[i + k];
    }

    return count;
}
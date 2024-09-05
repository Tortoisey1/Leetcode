bool divideArray(int *nums, int numsSize)
{
    // create a frequency table
    int *table = malloc(501 * sizeof(int));
    for (int i = 0; i < 501; i++)
    {
        table[i] = 0;
    }

    int temp;
    // fill the table by going through nums
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        table[temp]++;
    }
    int pairs = 0;
    for (int i = 1; i < 501; i++)
    {
        temp = table[i];
        if (temp % 2 != 0)
        {
            return false;
        }
        else
        {
            pairs += (temp / 2);
        }
    }
    if (pairs != numsSize / 2)
    {
        return false;
    }
    return true;
}
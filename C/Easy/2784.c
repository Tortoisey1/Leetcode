bool isGood(int *nums, int numsSize)
{
    // use a freq array
    int *freq = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        freq[i] = 0;
    }

    // fill the array
    for (int i = 0; i < numsSize; i++)
    {
        // if the number is bigger than the array size
        if (nums[i] >= numsSize)
        {
            return false;
        }
        freq[nums[i]]++;
    }

    // check the freq array
    for (int i = 1; i < numsSize; i++)
    {
        if (i == numsSize - 1)
        { // the one that need to repeat twice
            if (freq[i] != 2)
            {
                return false;
            }
        }
        else
        {
            if (freq[i] != 1)
            {
                return false;
            }
        }
    }

    free(freq);

    return true;
}
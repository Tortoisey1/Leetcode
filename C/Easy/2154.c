int findFinalValue(int *nums, int numsSize, int original)
{
    // use a frequency array which is O(n) then constant search time
    int *freq = calloc(1001, sizeof(int));

    // fill the freq array
    for (int i = 0; i < numsSize; i++)
    {
        freq[nums[i]] = 1;
    }

    while (original <= 1000 && freq[original])
    { // within boundary and exists
        original *= 2;
    }

    return original;
}
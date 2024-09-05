int max(int first, int second)
{
    if (first >= second)
    {
        return first;
    }
    return second;
}

int minSwaps(int *nums, int numsSize)
{
    // use sliding window
    // count the total number of 1s is the size of the required window
    // iterate through the array to get number of swap for a window at a given
    // index

    // use modulo to fix the wrapping problem formed by the circular array
    int totalOnes = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i])
        {
            totalOnes++;
        }
    }

    // all ones or no ones in array - edge case so can return
    if (totalOnes == numsSize || totalOnes == 0)
    {
        return 0;
    }

    int currentOnes = 0;
    int maxOnes;

    // first window
    for (int i = 0; i < totalOnes; i++)
    {
        if (nums[i])
        {
            currentOnes++;
        }
    }
    maxOnes = currentOnes;

    // slide the window
    for (int i = 1; i < numsSize; i++)
    {
        // left index
        if (nums[i - 1])
        {
            currentOnes--;
        }

        // right index
        if (nums[(i + totalOnes - 1) % numsSize])
        {
            currentOnes++;
        }
        maxOnes = max(maxOnes, currentOnes);
    }

    return totalOnes - maxOnes;
}
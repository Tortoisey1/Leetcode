int getMinDistance(int *nums, int numsSize, int target, int start)
{
    // from start i go both left and right so i wont miss any
    // will get minimum this way also since increment by 1
    int counter = 0;
    while (true)
    { // always exist so doesnt matter
        // check left
        if (start - counter >= 0)
        {
            if (nums[start - counter] == target)
            {
                return counter;
            }
        }

        // check right
        if (start + counter < numsSize)
        {
            if (nums[start + counter] == target)
            {
                return counter;
            }
        }

        counter++;
    }

    return 0;
}
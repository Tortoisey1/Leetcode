bool isMonotonic(int *nums, int numsSize)
{
    if (numsSize <= 2)
    {
        return true;
    }
    // hold a variable to decide whether is increasing or decreasing
    // first encounter of a different element then set 1 to be increasing
    // set 2 to be decreasing

    int cond = 0;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[i - 1])
        { // check if its increasing
            if (cond == 0)
            {
                cond = 1;
            }
            else if (cond == 2)
            {
                return false;
            }
        }
        else if (nums[i] < nums[i - 1])
        { // check if cond is decreasing
            if (cond == 0)
            {
                cond = 2;
            }
            else if (cond == 1)
            {
                return false;
            }
        }
        // otherwise its the same dc
    }

    return true;
}

int findNonMinOrMax(int *nums, int numsSize)
{
    if (numsSize <= 2)
    {
        return -1;
    }
    int one = nums[0];
    int two = nums[1];
    int three = nums[2];
    // Finding the middle element among the first three elements
    if ((one <= two && two <= three) || (three <= two && two <= one))
    {
        return two;
    }
    else if ((two <= one && one <= three) || (three <= one && one <= two))
    {
        return one;
    }
    else
    {
        return three;
    }
}
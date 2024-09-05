void moveZeroes(int *nums, int numsSize)
{
    int pointer = 0;
    // use a pointer to keep track of the place with non 0
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[pointer++] = nums[i];
        }
    }

    // fill remaining spots
    for (int i = pointer; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}
int smallestEqual(int *nums, int numsSize)
{
    int temp;
    int holder;
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        holder = i % 10;
        if (temp == holder)
        {
            return i;
        }
    }
    return -1;
}
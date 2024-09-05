int sumOfUnique(int *nums, int numsSize)
{
    // create frequency array
    int *hashtable = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        hashtable[i] = 0;
    }

    int temp;
    // fill the table
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        hashtable[temp]++;
    }

    int sum = 0;
    // get the sum of unique elements by looping through table
    for (int i = 1; i < 101; i++)
    {
        if (hashtable[i] == 1)
        {
            sum += i;
        }
    }
    return sum;
}
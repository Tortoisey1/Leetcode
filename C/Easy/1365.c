/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{

    // initialise the hashtable
    int *hashtable = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        hashtable[i] = 0;
    }

    int temp;
    // fill the hashtable by iterating through the nums
    for (int j = 0; j < numsSize; j++)
    {
        temp = nums[j];
        hashtable[temp]++;
    }

    int count = hashtable[0];
    hashtable[0] = 0;
    // iterate through the hashtable to get the cummulative sum
    for (int k = 1; k < 101; k++)
    {
        temp = hashtable[k];
        hashtable[k] = count;
        count += temp;
    }

    // iterate through the nums array to replace it with the sum
    for (int x = 0; x < numsSize; x++)
    {
        temp = nums[x];
        count = hashtable[temp];
        nums[x] = count;
    }

    *returnSize = numsSize;
    return nums;
}
int numIdenticalPairs(int *nums, int numsSize)
{
    // create hashtable
    int *hashtable = malloc(101 * (sizeof(int)));
    for (int i = 0; i < 101; i++)
    {
        hashtable[i] = 0;
    }

    int temp;

    int answer = 0;

    // iterate through the nums array
    for (int j = 0; j < numsSize; j++)
    {
        temp = nums[j];
        if (hashtable[temp])
        { // exist before
            answer += hashtable[temp];
            hashtable[temp]++;
        }
        else
        {
            // doesnt exist yet
            hashtable[temp] = 1;
        }
    }

    return answer;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *numberOfPairs(int *nums, int numsSize, int *returnSize)
{
    // create a frequency array
    int *table = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        table[i] = 0;
    }

    int temp;
    // fill the table
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        table[temp]++;
    }

    // check the table
    int pairs = 0;
    int leftover = 0;
    for (int i = 0; i < 101; i++)
    {
        pairs += table[i] / 2;
        leftover += table[i] % 2;
    }

    int *answer = malloc(2 * sizeof(int));
    answer[0] = pairs;
    answer[1] = leftover;
    *returnSize = 2;
    return answer;
}
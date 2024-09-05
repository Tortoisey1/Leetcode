/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool *prefixesDivBy5(int *nums, int numsSize, int *returnSize)
{
    // the number grows by multiple of 2 each time go next index
    int count = 0;
    // same size as input array just filling with true false
    bool *answer = malloc(numsSize * sizeof(bool));

    // loop through nums

    for (int i = 0; i < numsSize; i++)
    {
        count *= 2;
        count += nums[i];
        count %= 5;
        if (count % 5 == 0)
        {
            answer[i] = true;
        }
        else
        {
            answer[i] = false;
        }
    }

    *returnSize = numsSize;
    return answer;
}
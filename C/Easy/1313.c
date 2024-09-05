/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *decompressRLElist(int *nums, int numsSize, int *returnSize)
{
    // size of the answer is the even index
    // get the size first
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        count += nums[i];
        i++;
    }

    int *answer = malloc(count * sizeof(int));

    count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < nums[i]; j++)
        {
            answer[count] = nums[i + 1];
            count++;
        }

        i++; // skip odd
    }

    *returnSize = count;
    return answer;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *createTargetArray(int *nums, int numsSize, int *index, int indexSize,
                       int *returnSize)
{
    // create target array
    int *target = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        target[i] = -1;
    }

    // fill target array
    for (int i = 0; i < numsSize; i++)
    {
        if (target[index[i]] != -1)
        { // already contains something so need to
          // shift stuff to the right
            for (int j = numsSize - 1; j > index[i]; j--)
            {
                target[j] = target[j - 1];
            }
        }
        target[index[i]] = nums[i];
    }

    *returnSize = numsSize;
    return target;
}
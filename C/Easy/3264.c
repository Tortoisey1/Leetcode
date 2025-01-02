/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier,
                   int* returnSize) {
    int min;
    for (int i = 0; i < k; i++) {
        min = 0;
        for (int j = 1; j < numsSize; j++) {
            min = (nums[j] < nums[min]) ? j : min;
        }
        nums[min] *= multiplier;
    }

    *returnSize = numsSize;
    return nums;
}
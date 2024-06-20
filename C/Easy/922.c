/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArrayByParityII(int *nums, int numsSize, int *returnSize)
{
    // 2 pointer approach
    // first irregularity for both just swap
    int odd = 1;
    int even = 0;

    int temp;

    while (odd < numsSize && even < numsSize)
    {
        if (nums[odd] % 2 == 1)
        {
            odd += 2;
        }
        else if (nums[even] % 2 == 0)
        {
            even += 2;
        }
        else
        {
            temp = nums[odd];
            nums[odd] = nums[even];
            nums[even] = temp;
        }
    }

    *returnSize = numsSize;

    return nums;
}
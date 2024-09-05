/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    // use frequency map
    int count = 0;
    int *answer = (nums1Size >= nums2Size) ? malloc(nums1Size * sizeof(int)) : malloc(nums2Size * sizeof(int));

    int *map = calloc(1001, sizeof(int));

    // fill the map
    for (int i = 0; i < nums1Size; i++)
    {
        map[nums1[i]]++;
    }

    // compare
    for (int i = 0; i < nums2Size; i++)
    {
        if (map[nums2[i]] > 0)
        {
            answer[count] = nums2[i];
            map[nums2[i]]--;
            count++;
        }
    }

    *returnSize = count;

    return answer;
}
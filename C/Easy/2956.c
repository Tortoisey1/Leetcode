/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findIntersectionValues(int *nums1, int nums1Size, int *nums2,
                            int nums2Size, int *returnSize)
{
    // answer array is always 2 elements
    int *answer = malloc(2 * sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        answer[i] = 0;
    }

    // hashtable for nums1
    int *hashtable1 = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        hashtable1[i] = 0;
    }

    // hashtable for nums2
    int *hashtable2 = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++)
    {
        hashtable2[i] = 0;
    }

    int temp;
    // fill the first hashtable
    for (int i = 0; i < nums1Size; i++)
    {
        temp = nums1[i];
        hashtable1[temp]++;
    }

    // fill the second hashtable
    for (int i = 0; i < nums2Size; i++)
    {
        temp = nums2[i];
        hashtable2[temp]++;
    }

    int count = 0;
    // check first hashtable
    for (int i = 1; i < 101; i++)
    {
        // the number exists in the first num array
        if (hashtable1[i])
        {
            // the number exists in the second num array
            if (hashtable2[i])
            {
                count += hashtable1[i];
            }
        }
    }

    answer[0] = count;

    count = 0;
    // check second hashtable
    for (int i = 1; i < 101; i++)
    {
        // the number exists in the second num array
        if (hashtable2[i])
        {
            // the number exists in the first num array
            if (hashtable1[i])
            {
                count += hashtable2[i];
            }
        }
    }

    answer[1] = count;

    *returnSize = 2;
    return answer;
}
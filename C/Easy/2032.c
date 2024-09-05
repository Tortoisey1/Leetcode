/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoOutOfThree(int *nums1, int nums1Size, int *nums2, int nums2Size,
                   int *nums3, int nums3Size, int *returnSize)
{
    // create a frequency table
    int **table = malloc(101 * sizeof(int *));
    for (int i = 0; i < 101; i++)
    {
        table[i] = malloc(3 * sizeof(int));
    }
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            table[i][j] = 0;
        }
    }

    int *answer = malloc(100 * sizeof(int));
    int count = 0;
    int temp;

    // check nums1
    for (int i = 0; i < nums1Size; i++)
    {
        temp = nums1[i];
        table[temp][0] = 1;
    }

    // check nums2
    for (int i = 0; i < nums2Size; i++)
    {
        temp = nums2[i];
        table[temp][1] = 1;
    }

    // check nums3
    for (int i = 0; i < nums3Size; i++)
    {
        temp = nums3[i];
        table[temp][2] = 1;
    }

    // fill the answer
    for (int i = 0; i < 101; i++)
    {
        if (table[i][0] + table[i][1] + table[i][2] >= 2)
        {
            answer[count] = i;
            count++;
        }
    }
    *returnSize = count;
    return answer;
}
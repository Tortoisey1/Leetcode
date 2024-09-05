/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findThePrefixCommonArray(int *A, int ASize, int *B, int BSize,
                              int *returnSize)
{
    // store the encounter in a frequency array
    int *answer = malloc(BSize * sizeof(int));

    // keep track of number of common numbers
    int count = 0;

    // use a frequency array
    int *freq = malloc(51 * sizeof(int));
    for (int i = 0; i < 51; i++)
    {
        freq[i] = 0;
    }

    // fill the frequency array
    // can fill the answer array at the same time
    for (int i = 0; i < ASize; i++)
    {
        // fill freq array first
        freq[A[i]]++;
        if (freq[A[i]] == 2)
        {
            count++;
        }

        freq[B[i]]++;
        if (freq[B[i]] == 2)
        {
            count++;
        }

        // fill answer array
        answer[i] = count;
    }

    free(freq);

    *returnSize = BSize;
    return answer;
}
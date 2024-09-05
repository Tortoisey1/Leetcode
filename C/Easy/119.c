/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getRow(int rowIndex, int *returnSize)
{
    // only need the actual row
    // base case is the 2nd row
    // use bottom up approach

    int *answer = malloc((rowIndex + 1) * sizeof(int));
    // base case first row
    answer[0] = 1;

    // actual bottom up dp
    for (int i = 1; i <= rowIndex; i++)
    {

        // start from the back to not override values as it still is needed
        // later on
        for (int j = i - 1; j > 0; j--)
        {
            answer[j] = answer[j - 1] + answer[j];
        }
        answer[i] = 1;
    }

    *returnSize = rowIndex + 1;
    return answer;
}
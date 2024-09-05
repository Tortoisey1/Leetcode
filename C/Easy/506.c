/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char *intToString(int num)
{
    // Maximum number of digits in an int is 11 (including sign and null
    // terminator)
    char *str = (char *)malloc(12 * sizeof(char));
    sprintf(str, "%d", num);
    return str;
}

char **findRelativeRanks(int *score, int scoreSize, int *returnSize)
{
    char **answer = malloc((scoreSize) * sizeof(char *));
    *returnSize = scoreSize;

    int temp;
    int count = 1;
    int max = 0;
    // find max
    for (int i = 0; i < scoreSize; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    // create a hashtable
    int *table = malloc((max + 1) * sizeof(int));
    for (int i = 0; i < max + 1; i++)
    {
        table[i] = -1;
    }

    // store the number index
    for (int j = 0; j < scoreSize; j++)
    {
        temp = score[j];
        table[temp] = j;
    }

    // iterate backwards
    // 0 in index means doesnt exist 1 means exist
    for (int k = max; k >= 0; k--)
    {
        // exist in the score
        if (table[k] != -1)
        {
            // get the index of the number
            temp = table[k];
            // first
            if (count == 1)
            {
                answer[temp] = "Gold Medal";
            }
            // second
            else if (count == 2)
            {
                answer[temp] = "Silver Medal";
            }
            // third
            else if (count == 3)
            {
                answer[temp] = "Bronze Medal";

            } // otherwise is just the number
            else
            {
                answer[temp] = intToString(count);
            }
            count++;
        }
    }

    return answer;
}
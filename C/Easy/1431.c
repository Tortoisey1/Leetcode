/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies,
                      int *returnSize)
{
    int max = candies[0];
    // get the true max
    for (int i = 1; i < candiesSize; i++)
    {
        if (candies[i] > max)
        {
            max = candies[i];
        }
    }

    bool *answer = malloc(candiesSize * sizeof(bool));
    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] + extraCandies >= max)
        {
            answer[i] = true;
        }
        else
        {
            answer[i] = false;
        }
    }
    *returnSize = candiesSize;
    return answer;
}
int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

long long maximumHappinessSum(int *happiness, int happinessSize, int k)
{
    long long answer = 0;

    // sort int array
    qsort(happiness, happinessSize, sizeof(int), cmpfunc);

    // iterate backwards k times
    for (int i = 0; i < k; i++)
    {
        // if 0 can break alr
        if (i >= happiness[happinessSize - 1 - i])
        {
            return answer;
        }
        else
        {
            answer += happiness[happinessSize - 1 - i] - i;
        }
    }

    return answer;
}
int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int heightChecker(int *heights, int heightsSize)
{
    // copy the array to a new one to be sorted
    int *sorted = malloc(heightsSize * sizeof(int));
    for (int i = 0; i < heightsSize; i++)
    {
        sorted[i] = heights[i];
    }

    qsort(sorted, heightsSize, sizeof(int), cmp);

    int answer = 0;
    for (int i = 0; i < heightsSize; i++)
    {
        if (sorted[i] != heights[i])
        {
            answer++;
        }
    }
    return answer;
}
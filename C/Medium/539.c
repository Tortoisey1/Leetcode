// Comparison function
int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int findMinDifference(char **timePoints, int timePointsSize)
{
    // total minutes for each term store in another int array
    // sort the int array
    // compare adjacent term
    // must compare first and last term

    int *table = malloc(timePointsSize * sizeof(int));
    for (int i = 0; i < timePointsSize; i++)
    {
        char *temp = timePoints[i];
        int holder = 0;
        holder += ((temp[0] - '0') * 600); // ten hours place
        holder += ((temp[1] - '0') * 60);  // hours place
        holder += ((temp[3] - '0') * 10);  // tens place
        holder += ((temp[4] - '0'));       // ones place
        table[i] = holder;
    }

    // sort the int array
    qsort(table, timePointsSize, sizeof(int), compare);

    int min = INT_MAX;
    for (int j = 0; j < timePointsSize - 1; j++)
    {
        int adj = table[j + 1] - table[j];
        min = (min < adj) ? min : adj;
    }

    // edge case first and last number
    int last = 24 * 60 - table[timePointsSize - 1] + table[0];
    min = (min < last) ? min : last;

    return min;
}
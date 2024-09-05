int min(int a, int b) { return (a > b) ? b : a; }

int minCostClimbingStairs(int *cost, int costSize)
{
    // dp approach
    // current step is either cost plus one step or plus 2 step
    // use a table to store the minimum costs
    // start at step 0 or step 1
    // must pay the last step
    int *table = malloc(costSize * sizeof(int));

    // base cases
    // start from index0
    table[0] = cost[0];

    // start from index1
    table[1] = cost[1];

    // bottom up
    for (int i = 2; i < costSize; i++)
    {
        table[i] = min(table[i - 2], table[i - 1]) + cost[i];
    }

    // return from 1 step or 2 step away since current step is how much to climb
    // it
    return min(table[costSize - 1], table[costSize - 2]);
}
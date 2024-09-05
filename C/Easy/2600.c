int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
{
    // always choose numOnes then numZeros then negOnes
    // greedy approach
    if (numOnes >= k)
    {
        return k;
    }
    else if (numOnes + numZeros >= k)
    {
        return numOnes;
    }
    else
    {
        return numOnes - (k - numOnes - numZeros);
    }
}
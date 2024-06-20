int findJudge(int n, int **trust, int trustSize, int *trustColSize)
{
    // use 2 frequency array
    // one for number of people that trust him
    // one for whether he trust someone
    // so the town judge is the one with 0 trust others and n-1 trust him
    int *trusts = calloc((n + 1), sizeof(int));  // for trusting others
    int *trusted = calloc((n + 1), sizeof(int)); // getting trusted

    // fill the freq arrays
    for (int i = 0; i < trustSize; i++)
    {
        trusts[trust[i][0]]++;
        trusted[trust[i][1]]++;
    }

    // check the frequency arrays
    int answer = -1;
    for (int i = 1; i <= n; i++)
    {
        if (trusts[i] == 0 && trusted[i] == n - 1)
        {
            answer = i;
        }
    }

    return answer;
}
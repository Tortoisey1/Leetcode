int maximumWealth(int **accounts, int accountsSize, int *accountsColSize)
{
    int max = 0;
    int banks = *accountsColSize;
    for (int i = 0; i < banks; i++)
    {
        max += accounts[0][i];
    }

    int sum;
    // check the rest
    for (int i = 1; i < accountsSize; i++)
    {
        sum = 0;
        for (int j = 0; j < banks; j++)
        {
            sum += accounts[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }

    return max;
}
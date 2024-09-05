int chalkReplacer(int *chalk, int chalkSize, int k)
{
    // get the total sum of number of chalk used in one cycle
    // then get the remainder since thats the round that k less than 0
    // can do this since it always starts from 1
    long long sum = 0;
    for (int i = 0; i < chalkSize; i++)
    {
        sum += chalk[i];
    }

    k %= sum;

    // use a counter to keep track of which child it is at
    int counter = 0;

    while (k >= chalk[counter])
    {
        k -= chalk[counter++];
    }

    return counter;
}
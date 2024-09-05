int numWaterBottles(int numBottles, int numExchange)
{
    int count = numBottles;

    int empty = numBottles;

    int remainder = 0;

    while (empty / numExchange > 0)
    {
        remainder = empty % numExchange;
        empty /= numExchange;
        count += empty;
        empty += remainder;
    }

    return count;
}
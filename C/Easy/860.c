bool lemonadeChange(int *bills, int billsSize)
{
    // greedy if got 10 dollar bill try use 10 dollar bill first
    // else use the 5 dollar bill
    // keep 2 counts of 10 dollar and 5 dollar bill respectively
    int count5 = 0;
    int count10 = 0;

    for (int i = 0; i < billsSize; i++)
    {
        if (bills[i] == 10)
        {
            count10++;
            count5--;
            if (count5 < 0)
            {
                return false;
            }
        }
        else if (bills[i] == 20)
        {
            if (count10)
            {
                count10--;
                count5--;
                if (count5 < 0)
                {
                    return false;
                }
            }
            else
            {
                count5 -= 3;
                if (count5 < 0)
                {
                    return false;
                }
            }
        }
        else
        {
            count5++;
        }
    }

    return true;
}
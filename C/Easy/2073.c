int timeRequiredToBuy(int *tickets, int ticketsSize, int k)
{
    int time = 0;

    // If person k only needs one ticket, return the time to buy it
    if (tickets[k] == 1)
        return k + 1;

    // Continue buying tickets until person k buys all their tickets
    while (tickets[k] > 0)
    {
        for (int i = 0; i < ticketsSize; i++)
        {
            // Buy a ticket at index 'i' if available
            if (tickets[i] != 0)
            {
                tickets[i]--;
                time++;
            }

            // If person k bought all their rickets, return the time
            if (tickets[k] == 0)
                return time;
        }
    }

    return time;
}

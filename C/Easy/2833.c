int furthestDistanceFromOrigin(char *moves)
{
    int count = 0;  // for left and right
    int count2 = 0; // for bar

    int len = strlen(moves);
    // just get the counts by iterating through moves
    for (int i = 0; i < len; i++)
    {
        if (moves[i] == 'L')
        {
            count--;
        }
        else if (moves[i] == 'R')
        {
            count++;
        }
        else
        {
            count2++;
        }
    }

    // account for the bars
    if (count >= 0)
    { // if positive just move positive
        count += count2;
    }
    else
    {
        count -= count2;
        count *= -1;
    }

    return count;
}
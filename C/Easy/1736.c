char *maximumTime(char *time)
{
    // first 2 numbers possibilities:
    //  if first 2 is question mark just put 23
    //  if only first is empty, if second is after 3 then put 1 else put 2
    //  if second is empty if first is 2 then put 3 otherwise always put 9
    if (time[0] == '?' && time[1] == '?')
    {
        time[0] = '2';
        time[1] = '3';
    }
    else if (time[0] == '?')
    {
        if (time[1] - '3' > 0)
        {
            time[0] = '1';
        }
        else
        {
            time[0] = '2';
        }
    }
    else if (time[1] == '?')
    {
        if (time[0] == '2')
        {
            time[1] = '3';
        }
        else
        {
            time[1] = '9';
        }
    }

    // next 2 numbers possibilities
    // first number biggest always 5 regardless of next number
    // second number biggest always 9 regardless of first number
    if (time[3] == '?')
    {
        time[3] = '5';
    }

    if (time[4] == '?')
    {
        time[4] = '9';
    }

    return time;
}
bool isFascinating(int n)
{
    // create a hashtable
    int *hashtable = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        hashtable[i] = 0;
    }

    int once = n;
    int twice = 2 * n;
    int thrice = 3 * n;

    int temp;
    // fill hashtable can use single pass
    for (int j = 0; j < 3; j++)
    {
        // get digit for once
        temp = once % 10;
        hashtable[temp]++;
        once /= 10;

        // get digit for twice
        temp = twice % 10;
        hashtable[temp]++;
        twice /= 10;

        // get digit for thrice
        temp = thrice % 10;
        hashtable[temp]++;
        thrice /= 10;
    }

    // check if got 0
    if (hashtable[0])
    {
        return false;
    }

    // check the hashtable
    for (int k = 1; k < 10; k++)
    {
        if (hashtable[k] == 1)
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return true;
}
bool uniqueOccurrences(int *arr, int arrSize)
{
    // create the frequency array for the number
    int *table1 = malloc(2001 * sizeof(int));
    for (int i = 0; i < 2001; i++)
    {
        table1[i] = 0;
    }

    int temp;
    // fill this frequency array by looping through arr
    for (int i = 0; i < arrSize; i++)
    {
        // add 1k to take into account negative
        temp = arr[i] + 1000;
        table1[temp]++;
    }

    // create a frequency array for the frequencies
    // can only have 1k frequencies since length of arr max is 1k
    int *table2 = malloc(1001 * sizeof(int));
    for (int i = 0; i < 1001; i++)
    {
        table2[i] = 0;
    }

    // fill this new frequency array using old frequency array
    for (int i = 0; i < 2001; i++)
    {
        temp = table1[i];
        if (temp)
        { // frequency exist in arr
            if (table2[temp])
            { // this frequency alr exist in second arr
                return false;
            }
            else
            {
                table2[temp] = 1;
            }
        }
    }

    return true;
}
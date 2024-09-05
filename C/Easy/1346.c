bool checkIfExist(int *arr, int arrSize)
{
    // use a hashtable to store seen numbers
    int *table = calloc(2001, sizeof(int));
    int num;
    for (int i = 0; i < arrSize; i++)
    {
        num = arr[i];

        // check if exist the divison and multiple
        if (num % 2 == 0)
        {
            if (num / 2 + 1000 >= 0 && num / 2 + 1000 < 2001)
            {
                if (table[num / 2 + 1000])
                {
                    return true;
                }
            }
        }

        if (num * 2 + 1000 >= 0 && num * 2 + 1000 < 2001)
        {
            if (table[num * 2 + 1000])
            {
                return true;
            }
        }

        num = arr[i] + 1000;

        table[num] = 1;
    }

    return false;
}
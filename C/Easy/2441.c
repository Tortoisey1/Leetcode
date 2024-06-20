int findMaxK(int *nums, int numsSize)
{
    int temp;
    int max = -1;
    // hash table
    int *table = malloc((1001) * sizeof(int));
    // set all to 0
    for (int i = 0; i < 1001; i++)
    {
        table[i] = 0;
    }

    // if is negative set to -1
    // if is positive set to 1
    // if alr encountered before set to 2

    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        // negative number
        if (temp < 0)
        {
            temp *= -1;
            // havent any number
            if (table[temp] == 0)
            {
                table[temp] = -1;
            }

            // negative encounter before or alr have both positive and negative
            else if (table[temp] == 2 || table[temp] == -1)
            {
                continue;
            }
            // encounter positive before
            else
            {
                table[temp] = 2;
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
        else
        {
            // havent any number
            if (table[temp] == 0)
            {
                table[temp] = 1;
            }

            // positive encounter before or alr have both positive and negative
            else if (table[temp] == 2 || table[temp] == 1)
            {
                continue;
            }
            // encounter negative before
            else
            {
                table[temp] = 2;
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
    }

    return max;
}
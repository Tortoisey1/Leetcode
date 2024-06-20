int numJewelsInStones(char *jewels, char *stones)
{
    // create hashtable of jewels
    int *hashtable = malloc(52 * sizeof(int));
    for (int i = 0; i < 52; i++)
    {
        hashtable[i] = 0;
    }

    char temp;
    // fill the hashtable by going through jewels
    // problem is characters are not continuous in ascii so must get index
    // specially
    for (int j = 0; j < strlen(jewels); j++)
    {
        temp = jewels[j];
        if (temp >= 'a' && temp <= 'z')
        {
            hashtable[temp - 'a'] = 1;
        }
        else if (temp >= 'A' && temp <= 'Z')
        {
            hashtable[26 + temp - 'A'] = 1;
        }
    }

    int count = 0;
    // check through stones
    for (int k = 0; k < strlen(stones); k++)
    {
        temp = stones[k];
        if (temp >= 'a' && temp <= 'z')
        {
            if (hashtable[temp - 'a'])
            {
                count++;
            }
        }
        else if (temp >= 'A' && temp <= 'Z')
        {
            if (hashtable[26 + temp - 'A'])
            {
                count++;
            }
        }
    }

    return count;
}
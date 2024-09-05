bool areOccurrencesEqual(char *s)
{
    // create frequency array
    int *hashtable =
        malloc(26 * sizeof(int)); // only got lowercase letters so 26
    for (int i = 0; i < 26; i++)
    {
        hashtable[i] = 0;
    }

    int temp;
    // fill the table
    for (int i = 0; i < strlen(s); i++)
    {
        temp = s[i] - 'a';
        hashtable[temp]++;
    }

    int occur = 0;
    // check the table
    for (int i = 0; i < 26; i++)
    {
        if (occur == 0 && hashtable[i] > 0)
        { // first letter frequency
            occur = hashtable[i];
            continue;
        }

        if (hashtable[i])
        { // frequency exist
            if (hashtable[i] != occur)
            {
                return false;
            }
        }
    }

    return true;
}
char findTheDifference(char *s, char *t)
{
    // if s is empty t is only 1 character
    if (s == NULL)
    {
        return t[0];
    }

    // create the hashtable
    int *map = malloc(26 * sizeof(int));
    for (int j = 0; j < 26; j++)
    {
        map[j] = 0;
    }

    int temp;

    // map the characters in s
    for (int i = 0; i < strlen(s); i++)
    {
        // get the position of the letter in the hashtable
        temp = s[i] - 'a';
        map[temp] += 1;
    }

    // compare t to the map
    for (int k = 0; k < strlen(t); k++)
    {
        // get the position of the letter in the hashtable
        temp = t[k] - 'a';
        if (!map[temp])
        {
            return t[k];
        }
        else
        {
            map[temp] -= 1;
        }
    }
    return NULL;
}
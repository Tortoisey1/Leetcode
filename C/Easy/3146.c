int findPermutationDifference(char *s, char *t)
{
    // create hashtable
    int *hashtable = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        hashtable[i] = -1;
    }

    int temp;
    // fill the hashtable values by going through s
    for (int j = 0; j < strlen(s); j++)
    {
        // value of alphabet
        temp = s[j] - 'a';
        hashtable[temp] = j;
    }

    int answer = 0;

    int diff;
    // loop through t to get the difference
    for (int k = 0; k < strlen(t); k++)
    {
        temp = t[k] - 'a';
        diff = hashtable[temp];
        diff -= k;
        if (diff < 0)
        {
            diff *= -1;
        }
        answer += diff;
    }

    return answer;
}
bool canConstruct(char *ransomNote, char *magazine)
{
    // create the hashtable
    int *map = malloc(26 * sizeof(int));
    for (int j = 0; j < 26; j++)
    {
        map[j] = 0;
    }

    int temp;

    // map the characters in the magazine
    for (int i = 0; i < strlen(magazine); i++)
    {
        // get the position of the letter in the hashtable
        temp = magazine[i] - 'a';
        map[temp] += 1;
    }

    // compare the ransomNote to the map
    for (int k = 0; k < strlen(ransomNote); k++)
    {
        // get the position of the letter in the hashtable
        temp = ransomNote[k] - 'a';
        if (!map[temp])
        {
            return false;
        }
        else
        {
            map[temp] -= 1;
        }
    }
    return true;
}
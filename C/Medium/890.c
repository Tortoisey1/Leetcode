/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **findAndReplacePattern(char **words, int wordsSize, char *pattern,
                             int *returnSize)
{
    // create a map for every word in words
    char **answer = malloc(50 * sizeof(char *));
    int count = 0;

    char *map;
    bool cond;
    char *word;
    int len;
    char *map2;
    for (int i = 0; i < wordsSize; i++)
    {
        // create map
        // one for pattern to word
        // one for word to pattern
        map = malloc(26 * sizeof(char));
        for (int k = 0; k < 26; k++)
        {
            map[k] = '0';
        }

        map2 = malloc(26 * sizeof(char));
        for (int k = 0; k < 26; k++)
        {
            map2[k] = '0';
        }

        cond = true;
        word = words[i];
        len = strlen(word);
        // fill map
        for (int j = 0; j < len; j++)
        {
            if (map[pattern[j] - 'a'] == '0' &&
                map2[word[j] - 'a'] == '0')
            { // havent map yet
                map[pattern[j] - 'a'] = word[j];
                map2[word[j] - 'a'] = pattern[j];
            }
            else if (map[pattern[j] - 'a'] != word[j] ||
                     map2[word[j] - 'a'] !=
                         pattern[j])
            { // map already but doesnt match
                cond = false;
                break;
            }
        }

        if (cond)
        {
            answer[count] = words[i];
            count++;
        }

        free(map);
        free(map2);
    }

    *returnSize = count;
    return answer;
}
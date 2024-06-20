int countMatches(char ***items, int itemsSize, int *itemsColSize, char *ruleKey,
                 char *ruleValue)
{
    int count = 0;
    int search;
    // figure out where to search first
    if (strcmp(ruleKey, "color") == 0)
    {
        search = 1;
    }
    else if (strcmp(ruleKey, "name") == 0)
    {
        search = 2;
    }
    else
    {
        search = 0;
    }

    char **item;
    for (int i = 0; i < itemsSize; i++)
    {
        item = items[i];
        if (strcmp(item[search], ruleValue) == 0)
        {
            count++;
        }
    }

    return count;
}
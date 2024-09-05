bool detectCapitalUse(char *word)
{
    if (strlen(word) == 1)
    {
        return true;
    }
    // cond set to 1 for all lowercase
    // cond set to 2 for all uppercase
    // cond set to 3 for only first uppercase
    int cond;
    if ((word[0] >= 'a' && word[0] <= 'z') &&
        (word[1] >= 'a' && word[1] <= 'z'))
    { // only got lowercase already
        cond = 1;
    }
    else if ((word[0] >= 'A' && word[0] <= 'Z') &&
             (word[1] >= 'a' && word[1] <= 'z'))
    {
        cond = 3;
    }
    else if ((word[0] >= 'A' && word[0] <= 'Z') &&
             (word[1] >= 'A' && word[1] <= 'Z'))
    { // all uppercase
        cond = 2;
    }
    else
    {
        return false;
    }
    int len = strlen(word);

    for (int i = 2; i < len; i++)
    {
        if (cond == 1)
        { // all lowercase
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                return false;
            }
        }
        else if (cond == 2)
        { // all uppercase
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                return false;
            }
        }
        else
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                return false;
            }
        }
    }

    return true;
}
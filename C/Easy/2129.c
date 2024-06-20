char *capitalizeTitle(char *title)
{
    int len = strlen(title);
    int first;
    int count;
    for (int i = 0; i < len; i++)
    {
        first = i;
        count = 0;
        while (title[i] != ' ' &&
               i < len)
        { // change to lowercase at the same time
            if (title[i] >= 'A' && title[i] <= 'Z')
            {
                title[i] = 'a' + (title[i] - 'A');
            }
            i++;
            count++;
        }
        if (count > 2)
        { // first letter capitalise
            if (title[first] >= 'a' && title[first] <= 'z')
            {
                title[first] = 'A' + (title[first] - 'a');
            }
        }
    }
    return title;
}
int countPoints(char *rings)
{
    // use a frequency table
    int **hashtable = malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++)
    {
        hashtable[i] = malloc(3 * sizeof(int));
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hashtable[i][j] = 0;
        }
    }
    // red put at one green put at two blue put at three
    char c;
    int number;
    int len = strlen(rings);
    // fill the table
    for (int i = 0; i < len; i++)
    {
        // color
        c = rings[i];
        i++;
        number = rings[i] - '0';
        if (c == 'R')
        {
            hashtable[number][0] = 1;
        }
        else if (c == 'G')
        {
            hashtable[number][1] = 1;
        }
        else
        {
            hashtable[number][2] = 1;
        }
    }

    int count = 0;
    // check the table
    for (int i = 0; i < 10; i++)
    {
        if (hashtable[i][0] + hashtable[i][1] + hashtable[i][2] == 3)
        {
            count++;
        }
    }
    return count;
}
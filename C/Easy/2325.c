char *decodeMessage(char *key, char *message)
{
    // create a mapping array
    char *map = malloc(26 * sizeof(char));
    for (int i = 0; i < 26; i++)
    {
        map[i] = '0';
    }

    // get the mapping
    int len = strlen(key);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (key[i] != ' ')
        {
            if (map[key[i] - 'a'] == '0')
            { // havent map yet
                map[key[i] - 'a'] = 'a' + count;
                count++;
            }
        }
        if (count == 26)
        {
            break;
        }
    }

    len = strlen(message);
    // implement the mapping onto message
    for (int i = 0; i < len; i++)
    {
        if (message[i] != ' ')
        {
            message[i] = map[message[i] - 'a'];
        }
    }

    free(map);

    return message;
}
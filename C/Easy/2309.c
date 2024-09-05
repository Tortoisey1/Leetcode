char *greatestLetter(char *s)
{
    // use a frequency array
    // caps is 1
    // lower is 2
    // both is 3

    // create freq array
    int *freq = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    int temp;
    int len = strlen(s);
    // fill the array
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        { // uppercase
            temp = s[i] - 'A';
            if (freq[temp] == 2)
            { // lower before
                freq[temp] = 3;
            }
            else if (freq[temp] == 0)
            { // nth before
                freq[temp] = 1;
            } // other cases wont change the freq array
        }
        else
        { // lowercase is s[i]
            temp = s[i] - 'a';
            if (freq[temp] == 1)
            { // uppercase before
                freq[temp] = 3;
            }
            else if (freq[temp] == 0)
            { // nth before
                freq[temp] = 2;
            } // other cases wont change the freq array
        }
    }

    // check the freq array, go backwards since greatest
    for (int i = 25; i >= 0; i--)
    {
        if (freq[i] == 3)
        {
            char *result = malloc(2 * sizeof(char));
            result[0] = 'A' + i;
            result[1] = '\0';
            return result;
        }
    }

    free(freq);

    return "";
}
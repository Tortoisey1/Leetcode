int numberOfSpecialChars(char *word)
{
    // create hashtable
    // if upper store as 2
    // if lower store as 1
    // both seen change to 3
    int *hashtable = malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        hashtable[i] = 0;
    }

    int count = 0;
    char temp;
    int num;
    // iterate through words to fill the hashtable
    for (int i = 0; i < strlen(word); i++)
    {
        temp = word[i];
        if (temp >= 'a' && temp <= 'z')
        { // lowercase
            num = temp - 'a';
            if (hashtable[num] == 0)
            { // doesnt exist yet
                hashtable[num] = 1;
            }
            else if (hashtable[num] ==
                     2)
            { // uppercase exist before but not special yet
                hashtable[num] = 3;
                count++;
            }
            else
            { // either lower before or special alr
                continue;
            }
        }
        else
        { // uppercase
            num = temp - 'A';
            if (hashtable[num] == 0)
            { // doesnt exist yet
                hashtable[num] = 2;
            }
            else if (hashtable[num] ==
                     1)
            { // lowercase exist before but not special yet
                hashtable[num] = 3;
                count++;
            }
            else
            { // either uper before or special alr
                continue;
            }
        }
    }

    return count;
}
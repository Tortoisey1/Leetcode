char *sortVowels(char *s)
{
    // frequency array to store the vowels present in s
    // create the array
    int *freq = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    int len = strlen(s);
    // fill the array
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        { // capital
            if (s[i] == 'A')
            {
                freq[0]++;
            }
            else if (s[i] == 'E')
            {
                freq[1]++;
            }
            else if (s[i] == 'I')
            {
                freq[2]++;
            }
            else if (s[i] == 'O')
            {
                freq[3]++;
            }
            else if (s[i] == 'U')
            {
                freq[4]++;
            }
        }
        else
        { // lower
            if (s[i] == 'a')
            {
                freq[5]++;
            }
            else if (s[i] == 'e')
            {
                freq[6]++;
            }
            else if (s[i] == 'i')
            {
                freq[7]++;
            }
            else if (s[i] == 'o')
            {
                freq[8]++;
            }
            else if (s[i] == 'u')
            {
                freq[9]++;
            }
        }
    }

    // replace in s
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
            s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u')
        {
            for (int j = 0; j < 10; j++)
            {
                if (freq[j])
                {
                    if (j == 0)
                    {
                        s[i] = 'A';
                    }
                    else if (j == 1)
                    {
                        s[i] = 'E';
                    }
                    else if (j == 2)
                    {
                        s[i] = 'I';
                    }
                    else if (j == 3)
                    {
                        s[i] = 'O';
                    }
                    else if (j == 4)
                    {
                        s[i] = 'U';
                    }
                    else if (j == 5)
                    {
                        s[i] = 'a';
                    }
                    else if (j == 6)
                    {
                        s[i] = 'e';
                    }
                    else if (j == 7)
                    {
                        s[i] = 'i';
                    }
                    else if (j == 8)
                    {
                        s[i] = 'o';
                    }
                    else if (j == 9)
                    {
                        s[i] = 'u';
                    }
                    freq[j]--;
                    break;
                }
            }
        }
    }

    return s;
}

char *kthDistinct(char **arr, int arrSize, int k)
{
    // brute force approach
    //  use a boolean array to store whether seen or not
    bool *seen = malloc(arrSize * sizeof(bool));
    for (int i = 0; i < arrSize; i++)
    {
        seen[i] = true;
    }

    char *hold;
    bool temp; // to hold whether the current string is new
    for (int i = 0; i < arrSize; i++)
    {
        if (seen[i] == false)
        {
            continue;
        }
        temp = true;
        hold = arr[i];
        for (int j = i + 1; j < arrSize; j++)
        {
            if (j == i)
            {
                continue;
            }

            if (strcmp(hold, arr[j]) == 0)
            {
                seen[i] = false;
                seen[j] = false;
            }
        }
    }

    // check the seen array
    for (int i = 0; i < arrSize; i++)
    {
        if (seen[i])
        {
            k--;
        }
        if (k == 0)
        {
            return arr[i];
        }
    }

    return "";
}
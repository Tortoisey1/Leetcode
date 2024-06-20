int findLucky(int *arr, int arrSize)
{
    // create a frequency array hashtable
    int *hashtable = malloc(501 * sizeof(int));
    for (int i = 1; i < 501; i++)
    {
        hashtable[i] = 0;
    }
    int answer = 0;

    int temp;
    // fill the hashtable
    for (int i = 0; i < arrSize; i++)
    {
        temp = arr[i];
        hashtable[temp]++;
    }

    for (int i = 1; i < 501; i++)
    {
        if (hashtable[i] == i)
        {
            answer = i;
        }
    }

    if (answer == 0)
    {
        return -1;
    }

    return answer;
}
int countLargestGroup(int n)
{
    // create a hashtable to store the number of elements with that sum of digit
    // 0 not possible so 10 power 4 -1 which is 9999 sum is 36 is the largest
    int *table = malloc(37 * sizeof(int));
    for (int i = 0; i < 37; i++)
    {
        table[i] = 0;
    }

    int temp;
    int sum;
    // iterate through numbers possible to fill the hashtable
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        temp = i;
        // get the sum
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        table[sum]++;
    }

    int count = 1;
    int max = table[1];
    // iterate through the tableto find number of max
    for (int i = 2; i < 37; i++)
    {
        temp = table[i];
        if (temp > max)
        { // group has bigger size
            max = temp;
            count = 1;
        }
        else if (temp == max)
        { // same frequency
            count++;
        }
    }

    return count;
}
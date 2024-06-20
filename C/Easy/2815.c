int maxSum(int *nums, int numsSize)
{
    // create a hashmap to store the 2 largest number for each digit
    // smallest possible digit is 1
    int **table = malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; i++)
    {
        table[i] = malloc(2 * sizeof(int));
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            table[i][j] = 0;
        }
    }

    int temp;
    int digit = 0;
    int holder;
    // fill the table by going through nums
    for (int i = 0; i < numsSize; i++)
    {
        digit = 0;
        // get the max digit
        temp = nums[i];
        while (temp > 0)
        {
            holder = temp % 10;
            if (holder > digit)
            {
                digit = holder;
            }
            temp /= 10;
        }
        if (nums[i] > table[digit][0])
        {
            table[digit][1] = table[digit][0];
            table[digit][0] = nums[i];
        }
        else if (nums[i] > table[digit][1])
        {
            table[digit][1] = nums[i];
        }
    }

    int sum = -1;
    // check the max sum by going through table
    for (int i = 1; i < 10; i++)
    {
        temp = 0;
        for (int j = 0; j < 2; j++)
        {
            if (table[i][j] == 0)
            { // no pair
                temp = 0;
                break;
            }
            temp += table[i][j];
        }
        if (temp != 0)
        {
            if (temp > sum)
            {
                sum = temp;
            }
        }
    }

    return sum;
}
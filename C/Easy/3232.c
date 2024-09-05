bool canAliceWin(int *nums, int numsSize)
{
    // just have to check if the sum of single digit number is equals to double
    // digit numbers
    int single = 0;
    int doubleDigit = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < 10)
        {
            single += nums[i];
        }
        else
        {
            doubleDigit += nums[i];
        }
    }

    return !(single == doubleDigit);
}
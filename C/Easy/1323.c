int maximum69Number(int num)
{
    // always change the first 6
    int temp = num;
    int count = 0; // figure out which index is the 6
    int power = -1;
    while (temp > 0)
    {
        if (temp % 10 == 6)
        {
            power = count;
        }
        temp /= 10;
        count++;
    }
    int answer = num;
    if (power != -1)
    {
        answer = num - 6 * pow(10, power) + 9 * pow(10, power);
    }

    return answer;
}
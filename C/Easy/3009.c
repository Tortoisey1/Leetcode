int sumOfTheDigitsOfHarshadNumber(int x)
{
    // get sum of the digits
    int sum = 0;
    int temp = x;
    while (temp > 0)
    {
        sum += (temp % 10);
        temp /= 10;
    }

    int answer = (x % sum == 0) ? sum : -1;

    return answer;
}
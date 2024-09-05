int findComplement(int num)
{
    // convert and sum at the same time
    int answer = 0;
    double multiply = 1;

    while (num > 0)
    {
        if (num % 2 == 0)
        {
            answer += multiply;
        }
        num /= 2;
        multiply *= 2;
    }

    return answer;
}
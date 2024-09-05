int alternateDigitSum(int n)
{
    // can just alternate first
    // count number of digit then determine whether to flip
    // even number of digit flip odd remain the same
    // start with positive
    int answer = 0;
    int count = 0;

    while (n > 0)
    {
        if (count % 2 == 0)
        {
            answer += n % 10;
        }
        else
        {
            answer -= n % 10;
        }

        count++;
        n /= 10;
    }

    answer = (count % 2 == 0) ? answer * -1 : answer;

    return answer;
}
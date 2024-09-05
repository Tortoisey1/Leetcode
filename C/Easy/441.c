int arrangeCoins(int n)
{
    // use ap sum formula
    int answer = -0.5 + sqrt(0.25 + 2 * (long long)n);
    return answer;
}
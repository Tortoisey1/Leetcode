bool isPowerOfThree(int n)
{
    // use recursion
    if (n == 1)
    {
        return true;
    }
    else if (n < 1 || n % 3 != 0)
    {
        return false;
    }

    return isPowerOfThree(n / 3);
}
bool isSameAfterReversals(int num)
{
    // just check if the end has 0 but 0 is a special case
    if (num == 0)
    {
        return true;
    }

    return !(num % 10 == 0);
}
int minBitFlips(int start, int goal)
{
    // use xor to get different bits
    int result = start ^ goal;
    int count = 0;
    while (result > 0)
    {
        // just get the LSB
        count += (result & 1);
        result >>= 1;
    }

    return count;
}
int passThePillow(int n, int time)
{
    // (time+1) moduloe n will determine how far off is the pillow from the
    // first/last person
    // get number of rounds by time/(n-1);
    // number of rounds modulo 2 will determine if count from first or last
    // person odd is foward pass even is backwards pass
    int remainder = time % (n - 1);

    int rounds = time / (n - 1);

    if (rounds % 2 == 0)
    {
        return 1 + remainder;
    }
    else
    {
        return n - remainder;
    }
}
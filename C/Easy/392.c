bool isSubsequence(char *s, char *t)
{
    int lenS = strlen(s);
    int lenT = strlen(t);

    // empty s
    if (lenS == 0)
    {
        return true;
    }

    // empty t
    if (lenT == 0)
    {
        return false;
    }

    int pointerS = 0;
    int pointerT = 0;

    // use 2 pointer
    while (pointerT < lenT)
    {
        if (s[pointerS] == t[pointerT])
        {
            pointerS++;
        }

        if (pointerS == lenS)
        {
            return true;
        }
        pointerT++;
    }

    return false;
    ;
}
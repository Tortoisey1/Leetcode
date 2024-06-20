int appendCharacters(char *s, char *t)
{
    // use 2 pointers
    // go through s while checking t pointer and incrementing
    // return the difference between the pointer and the len of t
    int pointerT = 0;

    int len = strlen(s);

    int lenT = strlen(t);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == t[pointerT])
        {
            pointerT++;
        }

        if (pointerT == lenT)
        {
            break;
        }
    }

    return (lenT - pointerT);
}
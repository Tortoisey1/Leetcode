bool checkString(char *s)
{
    int len = strlen(s);
    int cond = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'b')
        {
            cond = 0;
        }
        else if (s[i] == 'a' && !cond)
        {
            return false;
        }
    }

    return true;
}
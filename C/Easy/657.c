bool judgeCircle(char *moves)
{
    int up = 0;
    int right = 0;

    int len = strlen(moves);
    for (int i = 0; i < len; i++)
    {
        if (moves[i] == 'U')
        {
            up++;
        }
        else if (moves[i] == 'D')
        {
            up--;
        }
        else if (moves[i] == 'R')
        {
            right++;
        }
        else
        {
            right--;
        }
    }

    if (up == 0 && right == 0)
    {
        return true;
    }
    return false;
}
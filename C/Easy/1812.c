bool squareIsWhite(char *coordinates)
{
    int col = coordinates[0] - 'a';
    int row = coordinates[1] - '1';
    if (col % 2 == 0)
    {
        if (row % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        if (row % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
bool isValidSudoku(char **board, int boardSize, int *boardColSize)
{
    // always a board size of 9

    // check rows
    for (int i = 0; i < 9; i++)
    {
        int *map = calloc(10, sizeof(int));
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] >= '1' && board[i][j] <= '9')
            {
                map[board[i][j] - '0']++;
                if (map[board[i][j] - '0'] > 1)
                {
                    return false;
                }
            }
        }
    }
    // check columns
    for (int i = 0; i < 9; i++)
    {
        int *map = calloc(10, sizeof(int));
        for (int j = 0; j < 9; j++)
        {
            if (board[j][i] >= '1' && board[j][i] <= '9')
            {
                map[board[j][i] - '0']++;
                if (map[board[j][i] - '0'] > 1)
                {
                    return false;
                }
            }
        }
    }

    // check squares
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int *map = calloc(10, sizeof(int));
            // for the actual square itself
            for (int k = 0; k < 3; k++)
            {
                for (int p = 0; p < 3; p++)
                {
                    if (board[k + i * 3][p + j * 3] >= '1' &&
                        board[k + i * 3][p + j * 3] <= '9')
                    {

                        map[board[k + i * 3][p + j * 3] - '0']++;
                        if (map[board[k + i * 3][p + j * 3] - '0'] > 1)
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }

    return true;
}
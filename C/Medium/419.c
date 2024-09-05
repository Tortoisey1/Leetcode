bool boundary(int boardSize, int *boardColSize, int i, int j)
{
    // check i
    if (i < 0 || i >= boardSize)
    {
        return false;
    }

    // check j
    if (j < 0 || j >= *boardColSize)
    {
        return false;
    }

    return true;
}

void dfs(char **board, int boardSize, int *boardColSize, int i, int j)
{
    // check boundary
    if (!boundary(boardSize, boardColSize, i, j))
    {
        return;
    }

    // if the board tile is 'X' perform the dfs
    if (board[i][j] == 'X')
    {
        // change the board tile to '.' to prevent double counting
        board[i][j] = '.';

        // check left
        dfs(board, boardSize, boardColSize, i - 1, j);

        // check right
        dfs(board, boardSize, boardColSize, i + 1, j);

        // check up
        dfs(board, boardSize, boardColSize, i, j - 1);

        // check bottom
        dfs(board, boardSize, boardColSize, i, j + 1);
    }
}

int countBattleships(char **board, int boardSize, int *boardColSize)
{
    // use dfs
    int count = 0;
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < *boardColSize; j++)
        {
            if (board[i][j] == 'X')
            {
                count++;
                dfs(board, boardSize, boardColSize, i, j);
            }
        }
    }
    return count;
}
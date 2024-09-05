bool areSimilar(int **mat, int matSize, int *matColSize, int k)
{
    // rotation is based on modulo operation
    // if left burst then just use the len - the number of shift
    // if is right burst then add from 0 the remainder
    if (k % *matColSize == 0)
    {
        return true;
    }

    k %= *matColSize;

    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < *matColSize; j++)
        {
            if (i % 2 == 0)
            { // even shift left
                if (j - k < 0)
                { // shift out of bounce so rotate
                    // len minus the shift
                    if (mat[i][*matColSize - k + j] != mat[i][j])
                    {
                        return false;
                    }
                }
                else
                {
                    if (mat[i][j] != mat[i][j - k])
                    {
                        return false;
                    }
                }
            }
            else
            { // odd shift right
                if (j + k >=
                    *matColSize)
                { // shift out of bounce so must rotate
                    if (mat[i][j] != mat[i][j + k - *matColSize])
                    {
                        return false;
                    }
                }
                else
                {
                    if (mat[i][j] != mat[i][j + k])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
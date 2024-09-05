/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
bool valid(int imageSize, int *imageColSize, int sr, int sc)
{

    if (sr < 0 || sr >= imageSize)
    {
        return false;
    }

    if (sc < 0 || sc >= *imageColSize)
    {
        return false;
    }

    return true;
}

int **floodFill(int **image, int imageSize, int *imageColSize, int sr, int sc,
                int color, int *returnSize, int **returnColumnSizes)
{

    int temp;
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    if (image[sr][sc] != color)
    {
        temp = image[sr][sc];
        image[sr][sc] = color;

        // check left
        if (valid(imageSize, imageColSize, sr - 1, sc))
        {
            if (image[sr - 1][sc] == temp)
            {
                floodFill(image, imageSize, imageColSize, sr - 1, sc, color,
                          returnSize, returnColumnSizes);
            }
        }

        // check right
        if (valid(imageSize, imageColSize, sr + 1, sc))
        {
            if (image[sr + 1][sc] == temp)
            {
                floodFill(image, imageSize, imageColSize, sr + 1, sc, color,
                          returnSize, returnColumnSizes);
            }
        }

        // check up
        if (valid(imageSize, imageColSize, sr, sc - 1))
        {
            if (image[sr][sc - 1] == temp)
            {
                floodFill(image, imageSize, imageColSize, sr, sc - 1, color,
                          returnSize, returnColumnSizes);
            }
        }

        // check bottom
        if (valid(imageSize, imageColSize, sr, sc + 1))
        {
            if (image[sr][sc + 1] == temp)
            {
                floodFill(image, imageSize, imageColSize, sr, sc + 1, color,
                          returnSize, returnColumnSizes);
            }
        }
    }

    return image;
}
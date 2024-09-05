/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n)
{
    // use binary search
    int left = 1;
    int right = n;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        int test = guess(mid);
        if (test == 0)
        {
            return mid;
        }
        else if (test == 1)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 1;
}
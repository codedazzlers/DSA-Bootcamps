//https://leetcode.com/problems/guess-number-higher-or-lower
//time complexity=O(log n)

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int start = 1, end = n, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (guess(mid) == -1)
                end = mid - 1;
            else if (guess(mid) == 1)
                start = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};
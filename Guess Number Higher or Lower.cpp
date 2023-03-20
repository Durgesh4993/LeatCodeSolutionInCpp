/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n);
};
/*****************************************************************************/
int Solution::guessNumber(int n) {
    int left{1}, right{n}, middle=n/2, ret;
    while ((ret=guess(middle)) != 0) { 
        (ret == -1) ? right = middle-1 : left = middle+1;
        middle = left + (right-left)/2;
    }
    return middle;
}

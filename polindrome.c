#include "polindrome.h"

/*
 * Given an integer x, return true if x is a
 * palindrome
 * , and false otherwise.
 *
 *
 *
 * Example 1:
 *
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * Example 2:
 *
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 * Example 3:
 *
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 *
 *
 * Constraints:
 *
 * -231 <= x <= 231 - 1
 *
 *
 * Follow up: Could you solve it without converting the integer to a string?
 */

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    bool res = true;

    long high = 1;
    while (x >= high)
        high *= 10;

    high /= 10;

    while (res && x > 0 && high >= 10)
    {
        res = (x / high == x % 10);
        x %= high;
        x /= 10;
        high /= 100;
    }

    return res;
}

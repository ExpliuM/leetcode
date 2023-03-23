#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int *last = nums + numsSize;
    ++nums;
    while (nums != last)
    {
        *nums += *(nums - 1);
        ++nums;
    }

    return nums - numsSize;
}
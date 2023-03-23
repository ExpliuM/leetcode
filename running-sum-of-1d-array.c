#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *res = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    res[0] = nums[0];
    for (size_t i = 1; i < numsSize; i++)
    {
        res[i] = res[i - 1] + nums[i];
    }

    return res;
}
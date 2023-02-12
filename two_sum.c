#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

static int comp(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
  if (nums == NULL)
  {
    return 0;
  }

  qsort(nums, numsSize, sizeof(int), comp);

  int closest = INT_MAX;
  int distance = INT_MAX;

  int n1, n2;
  int idx1, idx2;

  int res, sub, dis;

  *returnSize = 2;
  int *indexs = malloc(sizeof(int) * 2);

  idx1 = 0;
  idx2 = numsSize - 1;

  n1 = *nums;
  n2 = nums[idx2];

  while (idx1 != idx2)
  {
    res = n1 + n2;
    sub = target - res;
    dis = abs(sub);

    if (dis < distance)
    {

      *indexs = idx1;
      *(indexs + 1) = idx2;
      if (dis == 0)
      {
        return indexs;
      }
      closest = res;
      distance = dis;
    }

    if (sub > 0)
    {
      ++idx1;
      n1 = nums[idx1];
    }
    else
    {
      --idx2;
      n2 = nums[idx2];
    }
  }

  return indexs;
}
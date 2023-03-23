#include <mach/mach_time.h>
#include <stdbool.h>
#include <stdio.h>

#include "add-two-numbers.h"
#include "polindrome.h"
#include "three-sum-closest.h"
#include "two_sum.h"

int main()
{
  unsigned int i;

  int returnSize = 2;

  int nums1Size = 4;
  int nums1[4] = {2, 7, 11, 15};
  int target1 = 9;

  unsigned int loopCount;
  unsigned int iterations = 1000;

  uint64_t startTime = mach_absolute_time();
  for (loopCount = 0; loopCount < iterations; ++loopCount)
  {
    int *res1 = twoSum(nums1, nums1Size, target1, &returnSize);
  }
  uint64_t endTime = mach_absolute_time();
  double averageTime = (double)(endTime - startTime) / iterations;

  printf("Did %u calls in %f ns\n", iterations, averageTime);

  int *res1 = twoSum(nums1, nums1Size, target1, &returnSize);
  printf("[ %d, %d]", res1[0], res1[1]);

  int nums2Size = 3;
  int nums2[3] = {3, 2, 4};
  int target2 = 6;
  int *res2 = twoSum(nums2, nums2Size, target2, &returnSize);
  printf("[ %d, %d]", res2[0], res2[1]);

  int nums3Size = 3;
  int nums3[3] = {3, 2, 4};
  int target3 = 6;
  int *res3 = twoSum(nums3, nums3Size, target3, &returnSize);
  printf("[ %d, %d]", res3[0], res3[1]);
}
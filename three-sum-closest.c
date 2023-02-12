#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int threeSumClosest(int *nums, int numsSize, int target)
{
	if (nums == NULL)
	{
		return 0;
	}

	qsort(nums, numsSize, sizeof(int), comp);

	int closest = INT_MAX;
	int distance = INT_MAX;

	int n1, n2, n3;
	int idx2, idx3;

	int res;
	int sub;
	int dis;

	for (int idx1 = 0; idx1 < numsSize - 2; ++idx1)
	{
		idx2 = idx1 + 1;
		idx3 = numsSize - 1;

		n1 = nums[idx1];
		n2 = nums[idx2];
		n3 = nums[idx3];

		while (idx2 != idx3)
		{
			res = n1 + n2 + n3;
			sub = target - res;
			dis = abs(sub);

			if (dis < distance)
			{
				if (dis == 0)
				{
					return res;
				}
				closest = res;
				distance = dis;
			}

			if (sub > 0)
			{
				++idx2;
				n2 = nums[idx2];
			}
			else
			{
				--idx3;
				n3 = nums[idx3];
			}
		}
	}

	return closest;
}
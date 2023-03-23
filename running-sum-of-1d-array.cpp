#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = 0;
        for (int &num : nums)
        {
            num += sum;
            sum = num;
        }
        return nums
    }
};

// Maximum Sub Array Sum
// Kadane's Algorithm
#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int currSum = 0;
    int maxSum = INT32_MIN;
    for (int val : nums)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    cout << "Maximum Sub Array Sum : " << maxSubArray(nums) << endl;

    return 0;
}
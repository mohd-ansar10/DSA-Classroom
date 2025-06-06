#include <iostream>
#include <vector>
using namespace std;
// Reverse a given vector
void reverse(vector<int> &nums)
{
    int st = 0, end = nums.size() - 1;
    while (st < end)
    {
        swap(nums[st], nums[end]);
        st++;
        end--;
    }
}
int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Before reverse\n";
    for (int val : nums)
    {
        cout << val << endl;
    }

    reverse(nums);
    cout << "After reverse\n";
    for (int val : nums)
    {
        cout << val << endl;
    }

    return 0;
}

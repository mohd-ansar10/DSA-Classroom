#include <iostream>
#include <vector>
using namespace std;
vector<int>pairSum(vector<int> &nums,int target) {
    int n = nums.size();
    vector<int>ans;
    int i = 0,j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target ) {
            j--;
        }else if(pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
    


}
int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    // int n = nums.size();
    // vector<int> ans;

    // Brute force method

    // first number of the pair
    // for (int i = 0; i < n; i++)
    // {
    //     // second number of the pair
    //     for(int j = i + 1;j < n;j++) {
    //         // pair -> (i,j)

    //         if(nums[i] + nums[j] == target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }

    //     }
    // }

    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << "," << ans[1] << endl;

    
    return 0;
}
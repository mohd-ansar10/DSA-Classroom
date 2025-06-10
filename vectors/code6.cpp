# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
// int majorityElement(vector<int> &nums) {
//       // Brute force method : 
//     int n = nums.size();
//     for(int val : nums) {
//         int freq = 0;
//         for(int el : nums) {
//             if(val == el) {
//                 freq++;
//             }
//         }
//         if(freq > n/2) {
//             return val;
//         }
//     }
// }

// int majorityElement(vector<int> &nums) {
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq = 1,ans = nums[0];
//     for(int i = 1;i < n;i++) {
//         if(nums[i] == nums[i] - 1) {
//             freq++;
//         } else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2) {
//             return ans;
//         }
//     }
//     return ans;
// }

int majorityElement(vector<int> &nums) {
    // Moore's Voting Algo
    int n = nums.size();
    int freq = 0,ans = 0;
    for(int i = 0;i < n;i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    int count = 0;
    for(int val : nums) {
        if(val == ans) {
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    } else {
        return -1;
    }
    return ans;
}
int main() {

    vector<int> nums = {1,2,3,4};
    cout << majorityElement(nums) << endl;
    return 0;
}
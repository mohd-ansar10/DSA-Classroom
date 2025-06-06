# include<iostream>
# include<vector>
using namespace std;
// Perform Linear Search on a vector.
int linearSearch(vector<int> &nums,int target) {
   int sz = nums.size();
   for(int i = 0;i < sz;i++) {
        if(target == nums[i]) {
            return i;
        }
   }
   return -1;
}
int main() {

    vector<int>nums = {4,1,7,8,5,3,9};
    int target = -3;
    cout << linearSearch(nums,target) << endl;

    return 0;
}
# include<iostream>
using namespace std;
int linearSearch(int nums[],int sz,int target) {
    for(int i = 0;i < sz;i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int nums[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 50;
    cout << linearSearch(nums,sz,target) << endl;
    return 0;
}
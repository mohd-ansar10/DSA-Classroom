#include <iostream>
#include <limits>
using namespace std;
int findSmallest(int nums[], int size)
{
    int smallest = INT32_MAX;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if(nums[i] < smallest) {
            smallest = nums[i];
            index = i;
        }
    }
    return index;
}
int findLargest(int nums[], int size)
{
    int largest = INT32_MIN;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if(nums[i] > largest) {
            largest = nums[i];
            index = i;
        }
    }
    return index;
}
int main()
{

    int nums[] = {5, 15, 25, 1, -15, -24};
    int sz = 6;
    cout << "Smallest number is at index : " << findSmallest(nums, sz) << endl;
    cout << "Largest number is at index  : " << findLargest(nums, sz) << endl;

    return 0;
}
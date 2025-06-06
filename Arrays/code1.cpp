#include <iostream>
#include <limits>
using namespace std;
int findSmallest(int nums[], int size)
{
    int smallest = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
    }
    return smallest;
}
int findLargest(int nums[], int size)
{
    int largest = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(nums[i], largest);
    }
    return largest;
}
int main()
{

    int nums[] = {5, 15, 22, 1, -15, 24};
    int sz = 6;
    cout << "Smallest : " << findSmallest(nums, sz) << endl;
    cout << "Largest : " << findLargest(nums, sz) << endl;

    return 0;
}
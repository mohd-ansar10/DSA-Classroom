#include<iostream>
using namespace std;

int findMinIndex(int arr[], int sz) {
    int smallest = INT32_MAX;
    int minIdx = 0;
    for(int i = 0; i < sz; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            minIdx = i;
        }
    }
    return minIdx;
}

int findMaxIndex(int arr[], int sz) {
    int largest = INT32_MIN;
    int maxIdx = 0;
    for(int i = 0; i < sz; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
            maxIdx = i;
        }
    }
    return maxIdx;
}

void swapMinMax(int arr[], int sz) {
    int minIndex = findMinIndex(arr, sz);
    int maxIndex = findMaxIndex(arr, sz);

    // Swap the actual array elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int sz = 4;

    swapMinMax(arr, sz);

    cout << "After swapping:\n";
    for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

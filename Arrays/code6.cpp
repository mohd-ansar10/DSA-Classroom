// WAF to calculate sum & product of all numbers in an array.
# include<iostream>
using namespace std;
int sum(int arr[],int sz) {
    int sum = 0;
    for(int i = 0;i < sz;i++) {
        sum += arr[i];
    }
    return sum;
}
int product(int arr[],int sz) {
    int product = 1;
    for(int i = 0;i < sz;i++) {
        product *= arr[i];
    }
    return product;
}
int average(int arr[],double sz) {
    int sum = 0;
    double avg = 0;
    for(int i = 0;i < sz;i++) {
        sum += arr[i];
    }
    avg = (double)sum / sz;
    return avg;
}
int main() {
    int arr[] = {1,2,3,4}; // sum = 10,product = 24;
    int sz = 4;

    cout << sum(arr,sz) << endl;
    cout << product(arr,sz) << endl;
    cout << average(arr,sz) << endl;
    return 0;
}
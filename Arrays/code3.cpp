
// Pass by reference 
# include<iostream>
using namespace std;
void changeArray(int arr[],int size) {
    cout << "in function\n";
    for(int i = 0;i < size;i++) {
        arr[i] = 2 * arr[i];
    }
}
int main() {
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    cout << "in main\n";
    changeArray(arr,sz);
    for(int i = 0;i < sz;i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
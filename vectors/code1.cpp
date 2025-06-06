#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Creating an empty vector

    // vector<int> vec;
    // cout << "size = " << vec.size() << endl;
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);

    // cout << "size after push = " << vec.size() << endl;
    //  for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    // cout << vec.at(0) << endl;

    // vec.pop_back();
    // cout << "size after pop = " << vec.size() << endl;
    // //   for (int val : vec)
    // // {
    // //     cout << val << endl;
    // // }

    // cout << vec.at(2) << endl;

    // Vectors in Memory

    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = "<< vec.capacity() << endl;

   

    return 0;
}
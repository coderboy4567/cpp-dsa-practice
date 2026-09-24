#include<iostream>
#include<vector> // vector inialization

using namespace std;

int main() {
    // vector syntax -> 1
    // vector<int>vec;
    // cout << vec[0]; // not access 

    // vector syntax -> 2
    // vector<int> vec = {1,2,3};
    // cout << vec[0] << endl;
    // cout << vec[1] << endl; 
    // cout << vec[2] << endl;

    // vector syntax -> 3
    // vector<int> vec (5,1);
    // cout << vec[0] << endl;
    //  cout << vec[0] << endl;
    //   cout << vec[0];
    // for each loop
    // for(int val : vec) {
    //     cout << val << endl;
    // }

    // 1 example for each loop
    vector<char> vec = {'a','b','c','d','e'};
    for(char val : vec) {
        cout << val << endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // size function
    // vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    // cout << "vector size = " << vec.size() << endl;

    // push_back function -> add value
    // vector<int>vec;
    // cout << "vector size before push= " << vec.size() << endl;
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // cout << "vector size after push= " << vec.size() << endl;

    // pop_back function -> delete value by default in last
    // vector<int>vec;
    // cout << "vector size before push= " << vec.size() << endl;
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // cout << "vector size after push= " << vec.size() << endl;

    // cout << "after pop : ";
    // vec.pop_back();
    // for(int val : vec) {
    //     cout << val << endl;
    // }

    // front, back, at function
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    cout << vec.front() << endl; // print front
    cout << vec.back() << endl; // print back
    cout << vec.at(5);          // print value 
    return 0;
}
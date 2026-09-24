#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "size of vector in memory = "<< vec.size() << endl; // value
    cout << "size of capacity in memory = "<< vec.capacity() << endl; // capacity
}
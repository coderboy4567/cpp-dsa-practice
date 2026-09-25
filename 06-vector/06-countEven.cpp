#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 15, 22, 7, 8, 13, 20};

    int count = 0;

    for(int val : vec) {
        if(val % 2 == 0) {
            count++;
        }
    }

    cout << "Even numbers = " << count;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    int target = 30;
    bool found = false;

    for(int val : vec) {
        if(val == target) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}
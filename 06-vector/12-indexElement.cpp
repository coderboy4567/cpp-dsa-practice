// Find index of an element

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    int target = 40;
    int index = -1;

    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == target) {
            index = i;
            break;
        }
    }

    cout << "Index = " << index;

    return 0;
}
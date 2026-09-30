// Check if vector is sorted

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    bool sorted = true;

    for(int i = 0; i < vec.size() - 1; i++) {
        if(vec[i] > vec[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "Vector is sorted";
    } else {
        cout << "Vector is not sorted";
    }

    return 0;
}
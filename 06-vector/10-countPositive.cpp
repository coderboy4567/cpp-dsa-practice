// Count positive numbers

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {-5, 10, -2, 15, 0, 8, -7};

    int count = 0;

    for(int val : vec) {
        if(val > 0) {
            count++;
        }
    }

    cout << "Positive numbers = " << count;

    return 0;
}
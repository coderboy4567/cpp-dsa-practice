#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 10, 15, 20, 25};

    int sum = 0;

    for(int val : vec) {
        sum += val;
    }

    cout << "Sum = " << sum;

    return 0;
}
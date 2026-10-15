#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {4, 1, 2, 1, 2};

    int uniqueNum = 0;

    for (int i = 0; i < n; i++) {
        uniqueNum = uniqueNum ^ arr[i];
    }

    cout << "Unique Element = " << uniqueNum << "\n";

    return 0;
}
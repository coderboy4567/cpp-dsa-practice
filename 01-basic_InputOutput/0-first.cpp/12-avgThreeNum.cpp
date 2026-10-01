#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    double avg = (a + b + c) / 3.0;
    cout << "Average is = " << avg;

    return 0;
}
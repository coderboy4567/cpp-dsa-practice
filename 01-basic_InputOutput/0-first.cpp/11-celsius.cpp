#include <iostream>
using namespace std;

int main() {
    float C;
    cout << "Enter Celsius: ";
    cin >> C;

    float F = (C * 9 / 5) + 32;
    cout << "Fahrenheit is = " << F;

    return 0;
}
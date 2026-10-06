#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;

    float si = (p * r * t) / 100.0;
    cout << "Simple Interest = " << si << endl;

    return 0;
}
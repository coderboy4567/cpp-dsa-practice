#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int mult;
    for(int i=1; i<=10; i++) {
        mult = n * i;
        cout << n << " x " << i << " = " << mult << endl;
    }
    return 0;
}
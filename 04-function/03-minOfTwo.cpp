//Minimum of two numbers
#include<iostream>
using namespace std;

int minofTwo(int a, int b) { // parameters
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    cout << "min = " <<minofTwo(10,5) << endl; // argument
    return 0;
}


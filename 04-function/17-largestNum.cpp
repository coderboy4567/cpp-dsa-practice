#include<iostream>
using namespace std;

int largestNum(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }
    if(b >= a && b >=c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    cout << "Largest Number : " << largestNum(20, 5, 15) << endl;
}
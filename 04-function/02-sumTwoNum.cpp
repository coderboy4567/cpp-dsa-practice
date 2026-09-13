// sum 2 numbers with help of function
#include<iostream>
using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}

int main() {
    cout <<"This is your result : " << sum(10, 5) << endl;
}
//Calculate sum of digit of a number
#include<iostream>
using namespace std;

int Sum(int num) {
    int digitSum = 0;
    while(num > 0) {
        int lastdigit = num%10;
        num /= 10;
        digitSum += lastdigit;
    }
    return digitSum;
}

int main() {
    cout << "sum = " << Sum(12345) << endl;
    return 0;
}
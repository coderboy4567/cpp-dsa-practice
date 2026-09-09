//check number prime or not
#include<iostream>
using namespace std;

int main()
{
    int n = 7;
    bool isPrime = true;

    for(int i=2;i*i<=n;i++) {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << "Prime Number";
    } else {
        cout << "non Prime number";
    }
    return 0;
}
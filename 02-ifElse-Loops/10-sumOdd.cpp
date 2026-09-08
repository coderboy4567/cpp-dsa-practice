//sum all odd number from 1 to n.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    // for loop
    // int sum = 0;
    // for(int i=1;i<=n;i++) {
    //     if(i%2!=0)
    //     {
    //         sum = sum + i;
    //     }
    // }

    // while loop
    int sum = 0;
    int i = 1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "Odd sum = " << sum;
    return 0;
}
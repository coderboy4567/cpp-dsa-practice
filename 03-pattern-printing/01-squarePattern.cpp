// Number pattern
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// star pattern
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Number : ";
//     cin >> n;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Character pattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}

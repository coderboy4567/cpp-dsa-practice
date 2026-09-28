#include <iostream>
#include <cmath>
using namespace std;

double area(double r) { return 3.14159 * r * r; }
int area(int l, int b) { return l * b; }
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    cout << "Circle: " << area(5.0) << "\nRectangle: " << area(4, 6) << "\nTriangle: " << area(3.0, 4.0, 5.0) << endl;
    return 0;
}
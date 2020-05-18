#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1 = 3;
    int num2 = 5;
    double num3 = 16.0;
    double num4 = 5.5;
    double num5 = 5.7;
    double num6 = 5.1;

    cout << num1 << " power " << num2 << " = " << pow(num1, num2) << endl;

    cout << "square root of " << num3 << " = " << sqrt(num3) << endl;

    cout << "round of " << num4 << " = " << round(num4) << endl;

    cout << "ceil of " << num6 << " = " << ceil(num6) << endl;

    cout << "floor of " << num5 << " = " << floor(num5) << endl;

    cout << "max of " << num5 << " and " << num6 << " is " << fmax(num5, num6) << endl;

    cout << "min of " << num5 << " and " << num6 << " is " << fmin(num5, num6) << endl;

    return 0;
}

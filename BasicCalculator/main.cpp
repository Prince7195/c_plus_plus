#include <iostream>

using namespace std;

void calculate(int num1, int num2, string op) {
    double result;
    if (op == "+") {
        result = num1 + num2;
    } else if (op == "-") {
        result = num1 - num2;
    } else if (op == "*") {
        result = num1 * num2;
    } else if (op == "/") {
        result = num1 / num2;
    } else if (op == "%") {
        result = num1 % num2;
    } else {
        cout << "Invalid Operator";
    }

    cout << result;
}

int main()
{
    int num1, num2;
    string op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    calculate(num1,num2,op);
    return 0;
}

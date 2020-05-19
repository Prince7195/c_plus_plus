#include <iostream>

using namespace std;

void sayHi(string name, int age);

double cube(double num) {
    double result = num * num * num;
    return result;
}

int main()
{
    sayHi("Vijay", 26);
    double answer = cube(5.0);
    cout << answer;
    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << ", you are " << age << endl;
}

#include <iostream>

using namespace std;

int main()
{
    int age = 26;
    int *pAge = &age;

    double gpa = 9.09;
    double *pGpa = &gpa;

    string name = "Vj";
    string *pName = &name;

    cout << pAge << " = " << *pAge << endl;
    cout << pGpa << " = " << *pGpa << endl;
    cout << pName << " = " << *pName << endl;
    cout << endl;
    cout << &gpa << " = " << *&gpa << " = " << &*&gpa << " = " << *&*&gpa << endl; // continuous chain
    return 0;
}

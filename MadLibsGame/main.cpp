#include <iostream>

using namespace std;

int main()
{
    string color, pluralName, person;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural name: ";
    getline(cin, pluralName);
    cout << "Enter a person: ";
    getline(cin, person);

    cout << "Roses are " << color << endl;
    cout << pluralName << " are blue" << endl;
    cout << "I love " << person << endl;

    return 0;
}

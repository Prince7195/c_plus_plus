#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";

    cout << "Value in phrase: " << phrase << endl;

    cout << "Length of phrase: " << phrase.length() << endl;

    cout << "First letter of phrase: " << phrase[0] << endl;

    cout << "Index of Academy: " << phrase.find("Academy", 1) << endl;

    cout << "Get Academy from phrase: " << phrase.substr(8, 14) << endl;

    return 0;
}

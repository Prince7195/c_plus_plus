#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

class Person {
    public:
        string name;
        char gender;
    Person() {
        name = "Prince";
        gender = 'M';
    }
    Person(string _name, char _gender) {
        name = _name;
        gender = _gender;
    }

    string getName() {
        return name;
    }
};

class Movie {
    private:
        string rating;
    public:
        string title;
        string ditector;

    Movie(string _title, string _ditector, string _rating) {
        title = _title;
        ditector = _ditector;
        setRating(_rating);
    }

    void setRating(string _rating) {
        if (_rating == "G" || _rating == "PG" || _rating == "PG-13" || _rating == "R" || _rating == "NR") {
            rating = _rating;
        } else {
            rating = "NR";
        }

    }

    string getRating() {
        return rating;
    }
};

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// inheritance
class ItalianChef: public Chef {
    public:
        void makePastha() {
            cout << "The chef makes pastha" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    Book book1;

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;

    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    Person person1("Harry", 'M');
    cout << person1.getName() << endl;

    Person person2;
    cout << person2.getName() << endl;

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout << avengers.getRating() << endl;

    avengers.setRating("C");
    cout << avengers.getRating() << endl;

    cout << endl;

    Chef chef1;
    chef1.makeChicken();
    chef1.makeSpecialDish();

    cout << endl;

    ItalianChef italianChef1;
    italianChef1.makeChicken();
    italianChef1.makePastha();
    italianChef1.makeSpecialDish();

    return 0;
}

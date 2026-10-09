
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    bool operator<(const Book& b) const {
        if (price == b.price)
            return title < b.title;

        return price < b.price;
    }

    void display() const {
        cout << title << " - Rs. " << price;
    }
};

int main() {
    Book b1("C++ Programming", 500);
    Book b2("Data Structures", 500);
    Book b3("Computer Networks", 600);

    cout << "Book 1: "<<endl;
    b1.display();

    cout << "Book 2: "<<endl;
    b2.display();

    cout << "Book 3: "<<endl;
    b3.display();

    cout << "Book 1 < Book 2: "
         << (b1 < b2 ? "True" : "False");

    cout << "Book 1 < Book 3: "
         << (b1 < b3 ? "True" : "False");

    return 0;
}
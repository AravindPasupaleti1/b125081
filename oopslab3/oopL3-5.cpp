#include <iostream>
#include <string>
using namespace std;

class book
{
private:
    int id;
    string title;
    string author;
    float price;

public:
    void accept()
    {
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter title: ";
        cin >> title;

        cout << "Enter author: ";
        cin >> author;

        cout << "Enter price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nbook Details\n";
        cout << "book id: " << id << endl;
        cout << "Name: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl;
    }
};

int main()
{
    book *b = new book;

    b->accept();
    b->display();

    delete b;

    return 0;
}
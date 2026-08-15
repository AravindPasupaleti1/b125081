#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int id;
    string name;
    float price;
    int quantity;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "\nProduct ID: " << id;
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity;
        cout << "\nCost: " << price * quantity << endl;
    }

    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << endl;
        cart[i].accept();
    }

    cout << "\n----- Shopping Cart -----\n";

    for (int i = 0; i < n; i++)
    {
        cart[i].display();
        total += cart[i].getCost();
    }

    cout << "\nTotal Cart Amount = " << total << endl;

    delete[] cart;

    return 0;
}

#include <iostream>
using namespace std;

class InventoryItem {
    int productID, quantity;
    double unitPrice;

public:
    InventoryItem(int id, double price, int qty) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }

    bool isCompatible(const InventoryItem& item) const {
        return (productID == item.productID &&
                unitPrice == item.unitPrice);
    }

    InventoryItem operator+(const InventoryItem& item) const {
        if (!isCompatible(item)) {
            cout << "Incompatible inventory items" << endl;
            return *this;
        }

        return InventoryItem(productID, unitPrice,
                             quantity + item.quantity);
    }

    void display() const {
        cout << "Product ID: " << productID
             << ", Unit Price: Rs. " << unitPrice
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 20);
    InventoryItem i3(102, 60, 5);

    cout << "First item:\n";
    i1.display();

    cout << "Second item:\n";
    i2.display();

    InventoryItem result1 = i1 + i2;
    cout << "Combined item:\n";
    result1.display();

    cout << "\nAttempting incompatible combination:\n";

    InventoryItem result2 = i1 + i3;
    cout << "Combined item:\n";
    result2.display();

    cout << "\nOriginal first item after operations:\n";
    i1.display();

    return 0;
}
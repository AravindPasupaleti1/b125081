#include <iostream>
#include <string>
using namespace std;

class car {
    int car_num;
    string brand;
    int year;

public:
    void acceptDetails() {
        cout << "Enter car Number: ";
        cin >> car_num;

        
        cout << "Enter brand: ";
        cin>> brand;

        cout << "Enter year: ";
        cin >> year;
    }

    void displayDetails() {
        cout << "\n--- car Details ---\n";
        cout << "car Number: " << car_num << endl;
        cout << " brand Name: " << brand<< endl;
        cout << "year: " << year<< endl;
    }
};

int main() {
    car c;

    c.acceptDetails();
    c.displayDetails();

    return 0;
}
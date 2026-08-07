#include <iostream>
#include <string>
using namespace std;

class WaterBill {
    int consumerNumber;
    string consumerName;
    double consumption;
    double totalBill;

public:
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cout << "Enter Consumer Name: ";
        cin >> ws;
        getline(cin, consumerName);
        cout << "Enter Water Consumption (in litres): ";
        cin >> consumption;
    }

    void calculateBill() {
        double rem = consumption;
        totalBill = 0;

        if (rem <= 500) {
            totalBill = rem * 2;
        } else {
            totalBill += 500 * 2;
            rem -= 500;
            if (rem <= 500) {
                totalBill += rem * 3;
            } else {
                totalBill += 500 * 3;
                rem -= 500;
                totalBill += rem * 5;
            }
        }
    }

    void displayBill() {
        calculateBill();
        cout << "\n--- Water Bill Statement ---" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Water Consumption: " << consumption << " litres" << endl;
        cout << "Total Bill Amount: ₹" << totalBill << endl;
    }
};

int main() {
    WaterBill bill;
    bill.acceptDetails();
    bill.displayBill();
    return 0;
}
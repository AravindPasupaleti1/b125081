
#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() const {
        return AccountBalance(-balance);
    }

    void display() const {
        cout << "Balance: Rs. " << balance;
    }
};

int main() {
    AccountBalance a1(5000);

    cout << "Original account: ";
    a1.display();

    AccountBalance a2 = -a1;

    cout << "\nAdjusted account: ";
    a2.display();

    cout << "\nOriginal account after operation: ";
    a1.display();

    return 0;
}
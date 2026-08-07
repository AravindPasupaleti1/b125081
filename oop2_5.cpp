#include <iostream>
#include <string>
using namespace std;

class mobilerecharge {
    int mobileno;
    string customername;
    double balance;

public:
    void enterDetails() {
        cout << "Enter mobile Number: ";
        cin >> mobileno;

    
        cout << "Enter customer Name: ";
        cin>> customername;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void recharge() {
        double amount;

        cout << "\nEnter amount to recharge: ";
        cin >> amount;
            if(amount<balance){
            balance-=amount;
            cout<<"the balance after recharge:"<<balance;
            }
            else{
                cout<<"cannot be recharged";
            }
    }

    void updatedbalance(){
            cout << "the updated balnce:"<<balance<<endl;
        
    }

    
    
};

int main() {
    mobilerecharge m;

    m.enterDetails();
    m.recharge();

    return 0;
}
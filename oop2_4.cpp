#include <iostream>
#include <string>
using namespace std;

class hotelroom{
    int roomno;
    string guestname;
    int days,cost;

public:
    void acceptDetails() {
        cout << "Enter room Number: ";
        cin >> roomno ;

        
        cout << "Enter guest name: ";
        cin>> guestname;

        cout << "Enter days: ";
        cin >> days;

         cout << "Enter cost per day: ";
        cin >> cost;
    }

    void totalcost() {
        int Trent;
        Trent=days*cost;}

    void displayDetails() {
        int Trent;
        cout << "\n--- Details ---\n";
        cout << "room Number: " << roomno << endl;
        cout << " guest Name: " << guestname<< endl;
        cout << "days stayed: " << days<< endl;
        cout << "cost per day: " << cost<< endl;
        cout << "total rent: " << Trent<< endl;

    }
};

int main() {
    hotelroom h;

    h.acceptDetails();
    h.totalcost();
    h.displayDetails();

    return 0;
}
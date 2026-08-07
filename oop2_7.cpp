#include <iostream>
#include <string>
using namespace std;

class movieticket {
    public:
    int price,tcost;
    string movie;
    int tickets;


    void acceptDetails() {
        cout << "Enter prize: ";
        cin >> price;

        
        cout << "Enter movie name: ";
        cin>> movie;

        cout << "Enter tickets: ";
        cin >> tickets;
    }

    int totalcost(){
       tcost=price*tickets;
      return tcost;
    }

    void displayDetails() {
        cout << "\n--- movie Details ---\n";
        cout << "price: " << price << endl;
        cout << " movie Name: " << movie<< endl;
        cout << "tickets: " << tickets<< endl;
        cout << "total cost: " << totalcost()<< endl;
    }
};

int main() {
    movieticket m;

    m.acceptDetails();
    m.displayDetails();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class hostelfee {
    public:
    int months;
    string name;
    float mfee,tfee;
    int id;


    void acceptDetails() {
        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student name: ";
        cin >> name; 

        cout << "Enter months: ";
        cin >> months;

        cout << "Enter fee per month: ";
        cin >> mfee;
    }

    void totalfee() {

        tfee=months*mfee;
    }

    void payment(){
        int Mmonths=12;
        if(months>Mmonths){
            cout<<"payment is delayed";
            tfee+=500;
        }
    }

    void display() {
        cout << "\n--- Details ---\n";
        cout << "student ID: " << id << endl;
        cout << "studentName: " << name << endl;
        cout << "months: " << months << endl;
        cout << "fee per month: " << mfee << endl;
        cout << "tfee:"<<tfee; 
        
    }
};

int main() {
    hostelfee h;

    h.acceptDetails();
    h.totalfee();
    h.payment();
    h.display();

    return 0;
}
#include <iostream>
using namespace std;

class Locker {
private:
    int lockerNumber;
    bool occupied;
    int *accessCode;
    int codeSize;

public:
    Locker(int num, int size) {
        lockerNumber = num;
        occupied = false;
        codeSize = size;

        accessCode = new int[codeSize];

        for (int i = 0; i < codeSize; i++)
            accessCode[i] = 0;
    }

    void setCode(int code[]) {
        for (int i = 0; i < codeSize; i++)
            accessCode[i] = code[i];

        occupied = true;
    }

    void setCode(int position, int value) {
        if (position >= 0 && position < codeSize) {
            accessCode[position] = value;
            occupied = true;
        } else {
            cout << "Invalid position" << endl;
        }
    }

    void display() {
        cout << "\nLocker Number: " << lockerNumber;
        cout << "\nOccupied: " << (occupied ? "Yes" : "No");
        cout << "\nAccess Code: ";

        for (int i = 0; i < codeSize; i++)
            cout << accessCode[i];

        cout << endl;
    }

    ~Locker() {
        delete[] accessCode;
    }
};

int main() {
    int n, codeSize;

    cout << "Enter number of lockers: ";
    cin >> n;

    cout << "Enter access code size: ";
    cin >> codeSize;

    Locker **lockers = new Locker*[n];

    for (int i = 0; i < n; i++) {
        lockers[i] = new Locker(i + 1, codeSize);

        int *code = new int[codeSize];

        cout << "Enter complete code for Locker " << i + 1 << ": ";
        for (int j = 0; j < codeSize; j++)
            cin >> code[j];

        lockers[i]->setCode(code);

        delete[] code;
    }

    // Change one position
    int lockerNo, position, value;

    cout << "\nEnter locker number to change code: ";
    cin >> lockerNo;

    cout << "Enter position: ";
    cin >> position;

    cout << "Enter new value: ";
    cin >> value;

    if (lockerNo >= 1 && lockerNo <= n)
        lockers[lockerNo - 1]->setCode(position, value);

    cout << "\n--- Locker Details ---\n";

    for (int i = 0; i < n; i++) {
        lockers[i]->display();
    }

    for (int i = 0; i < n; i++)
        delete lockers[i];

    delete[] lockers;

    return 0;
}





#include <iostream>
using namespace std;

class square {
    float side;

public:
    void readDimensions() {
        cout << "Enter side: ";
        cin >> side;


    }

    float calculateArea() {
        return side*side;
    }

    float calculatePerimeter() {
        return 4*side;
    }

    void displayResults() {
        cout << "\n---square Details ---\n";
        cout << "side: " << side<< endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    square r;

    r.readDimensions();
    r.displayResults();

    return 0;
}
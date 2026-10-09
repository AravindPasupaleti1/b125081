
#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }

    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }

    Temperature operator-() const {
        return Temperature(-celsius);
    }

    void display() const {
        cout << celsius << " degree Celsius";
    }
};

int main() {
    Temperature t1(35), t2(25);

    cout << "Temperature 1: ";
    t1.display();

    cout << "\nTemperature 2: ";
    t2.display();

    cout << "\n\nTemperature 1 > Temperature 2: "
         << (t1 > t2 ? "True" : "False");

    cout << "\nTemperature 1 < Temperature 2: "
         << (t1 < t2 ? "True" : "False");

    Temperature t3 = -t1;

    cout << "\nNegated temperature 1: ";
    t3.display();

    cout << "\nOriginal temperature 1: ";
    t1.display();

    return 0;
}
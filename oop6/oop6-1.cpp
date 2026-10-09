
#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
    int num, den;

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }

        int g = gcd(abs(num), abs(den));
        if (g != 0) {
            num /= g;
            den /= g;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        num=n;
        den=d;
        if (den == 0) {
            cout<<"Denominator cannot be zero"<<endl;
        }
        simplify();
    }

    Fraction operator+(const Fraction& f) const {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    Fraction operator-(const Fraction& f) const {
        return Fraction(num * f.den - f.num * den,
                        den * f.den);
    }

    void display() const {
        cout << num << "/" << den;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "First fraction: ";
    f1.display();

    cout << "\nSecond fraction: ";
    f2.display();

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "\nAddition: ";
    sum.display();

    cout << "\nSubtraction: ";
    diff.display();

    return 0;
}
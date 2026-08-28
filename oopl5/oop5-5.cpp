#include <iostream>
using namespace std;

// Swap integers using references
void swapData(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap floating-point values using references
void swapData(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// Swap integers using pointers
void swapData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    double x, y;
    int p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b;
    swapData(a, b);
    cout << "\nAfter swapping: " << a << " " << b;

    cout << "\n\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Before swapping: " << x << " " << y;
    swapData(x, y);
    cout << "\nAfter swapping: " << x << " " << y;

    cout << "\n\nEnter two integers for pointer swapping: ";
    cin >> p >> q;

    cout << "Before swapping: " << p << " " << q;
    swapData(&p, &q);
    cout << "\nAfter swapping: " << p << " " << q;

    return 0;
}
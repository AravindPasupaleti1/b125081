#include <iostream>
using namespace std;

void update(int &x, int amount)
{
    x += amount;
}

void update(double &x, double amount)
{
    x += amount;
}

void update(int arr[], int n, int amount)
{
    for (int i = 0; i < n; i++)
        arr[i] += amount;
}

int main()
{
    int x, amount;
    double y, dAmount;
    int n;

    cout << "Enter integer value: ";
    cin >> x;

    cout << "Before update = " << x;

    cout << "\nEnter amount to increase: ";
    cin >> amount;

    update(x, amount);

    cout << "After update = " << x;

    cout << "\n\nEnter floating-point value: ";
    cin >> y;

    cout << "Before update = " << y;

    cout << "\nEnter amount to increase: ";
    cin >> dAmount;

    update(y, dAmount);

    cout << "After update = " << y;

    cout << "\n\nEnter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nEnter amount to increase: ";
    cin >> amount;

    update(arr, n, amount);

    cout << "After update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

#include <iostream>
using namespace std;

void inspect(int x)
{
    cout << "Value of integer variable = " << x;
}

void inspect(int *p)
{
    cout << "Value stored at pointer = " << *p;
}

void inspect(int *p, int n)
{
    cout << "Array elements = ";

    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
}

int main()
{
    int x, n;

    cout << "Enter an integer: ";
    cin >> x;

    inspect(x);

    cout << "\n\nEnter an integer for pointer: ";
    cin >> x;

    inspect(&x);

    cout << "\n\nEnter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}

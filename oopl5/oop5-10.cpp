#include <iostream>
using namespace std;

double evaluate(int a, int b)
{
    return (a + b) / 2.0;
}

double evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

double evaluate(double a, double b)
{
    return (a + b) / 2.0;
}

double evaluate(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return (double)sum / n;
}

double evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int a, b, c;
    double x, y;
    int n;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Average of two integers = "
         << evaluate(a, b);

    cout << "\n\nEnter three integers: ";
    cin >> a >> b >> c;

    cout << "Average of three integers = "
         << evaluate(a, b, c);

    cout << "\n\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Average of two floating-point values = "
         << evaluate(x, y);

    cout << "\n\nEnter size of integer array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of array elements = "
         << evaluate(arr, n);

    cout << "\n\nEnter two integers for pointer evaluation: ";
    cin >> a >> b;

    cout << "Average using pointers = "
         << evaluate(&a, &b);

    return 0;
}

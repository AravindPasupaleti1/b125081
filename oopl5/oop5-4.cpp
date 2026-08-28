
#include <iostream>
using namespace std;

// Sum of integer array
int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

// Sum of floating-point array
double process(double arr[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

// Sum of first k elements
int process(int arr[], int n, int k)
{
    int sum = 0;

    for (int i = 0; i < k && i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n, k;

    cout << "Enter size of integer array: ";
    cin >> n;

    int arr[n];

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum of integer array = " << process(arr, n);

    cout << "\nEnter number of elements in floating-point array: ";
    cin >> n;

    double farr[n];

    cout << "Enter floating-point elements: ";
    for (int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Sum of floating-point array = " << process(farr, n);

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Sum of first " << k << " elements = "
         << process(arr, n, k);

    return 0;
}

#include <iostream>
using namespace std;


int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    cout<<"largest:"<<largest<<endl;
    cout<<"smallest:"<<smallest<<endl;
    cout<<"sum:"<<sum<<endl;

    delete[] arr;

    return 0;
}
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


    cout<<"reversed array"<<endl;
    int arr1[n];
    for(int i=n-1;i>=0;i--){
      arr1[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }


    delete[] arr;

    return 0;
}
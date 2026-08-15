#include <iostream>
using namespace std;

int main()
{
    int n,x;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"element:"<<endl;
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"element at index"<<i<<endl;
            break;
        }

    }
    delete[] arr;

    return 0;
}

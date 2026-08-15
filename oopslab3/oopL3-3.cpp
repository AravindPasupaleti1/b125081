#include<iostream>
using namespace std;
int main(){
    int n,even,odd;
    cout<<"the value of n:";
    cin>>n;
    int *arr= new int[n];
    
    for(int i=0;i<n;i++){
        cout<<"element"<<i<<endl;
        cin>>arr[i];
    }
    even=0;
    odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
            else{
                odd++;
            }
    }
    cout<<"no of even:"<<even<<endl;
    cout<<"no of odd:"<<odd<<endl;
    return 0;
}
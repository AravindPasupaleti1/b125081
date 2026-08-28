#include<iostream>
#define PI 3.14
using namespace std;
int area(int s){
    return s*s;
}
int area(int l,int b){
    return l*b;
}
float area(float r){
    return PI*r;
}
int main(){
    cout<<"area of square:"<<area(5)<<endl;
     cout<<"area of rectangle:"<<area(5,6)<<endl;
      cout<<"area of circle:"<<area(7.69f)<<endl;
      return 0;
}
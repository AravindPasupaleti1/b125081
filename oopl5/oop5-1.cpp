#include<iostream>
using namespace std;
int convert(int kms){
    int mets=kms*1000;
    return mets;
}
int convert(float mts){
    int cms=mts*100;
    return cms;
}
double convert(double kms){
    double mets=kms*1000;
    return mets;
}
int main(){
    cout<<"c1:"<<convert(76)<<endl;
    cout<<"c2:"<<convert(76.00f)<<endl;
    cout<<"c3:"<<convert(76.0000)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
   int *n1=new int();
   int *n2=new int();
   cout<<"enter values:"<<endl; ;
   cout<<"number 1:"<<endl;
   cin>>*n1;
   cout <<"number 2:"<<endl;
   cin>>*n2;

   cout<<"the sum"<<endl;
   int sum;
   sum=*n1+*n2;
   cout<<"the sum:"<<sum;

   cout<<"the difference"<<endl;
   int diff;
   diff=*n1-*n2;
   cout<<"the difference:"<<diff;

   cout<<"the product"<<endl;
   int pro;
   pro=(*n1)*(*n2);
   cout<<"the product:"<<pro;

   cout<<"the quotient"<<endl;
   int q;
   if(*n1>*n2){
    q=*n1/(*n2);
   }
   else{
    q=*n2/(*n2);
   }
   cout<<"the quotient:"<<q;

   delete n1;
   delete n2;

   return 0;
}

   

   

   


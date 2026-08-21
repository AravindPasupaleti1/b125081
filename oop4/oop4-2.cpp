#include<iostream>
#include<string>
using namespace std;

class useracc{
    private:
    string name;
    int attempts;
    string accstatus;

    public:
    useracc(string n,int a,string s){
        name=n;
        attempts=a;
        accstatus=s;
    }

    friend void checkaccount(useracc);
};
void checkaccount(useracc u){
       cout<<"username:"<<u.name<<endl;
       cout<<"no of attempts:"<<u.attempts<<endl;
       cout<<"account status:"<<u.accstatus<<endl;

       if(u.attempts>=3){
        cout<<"Account locked"<<endl;
       }
       else{
        cout<<"Account active";
       }
}

int main(){
    useracc u1("aravind",5,"notactive");
    checkaccount(u1);
    return 0;
}
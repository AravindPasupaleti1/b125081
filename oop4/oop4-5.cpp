#include<iostream>
#include<string>
using namespace std;

class eventparticipant{
    private:
    string name;
    int age;
    string status;

    public:
       eventparticipant(string n,int a,string s){
        name=n;
        age=a;
        status=s;
    }

    friend void verify(eventparticipant);
};
void verify(eventparticipant e){

       if(e.age>=18){
        e.status="active";
        cout<<"eligible"<<endl;
       }
       else {
        e.status="not active";
        cout<<"not eligible"<<endl;
}
       cout<<"username:"<<e.name<<endl;
       cout<<"age:"<<e.age<<endl;
       cout<<"status:"<<e.status<<endl;
}

int main(){
    eventparticipant e1("aravind",19,"active");
    verify(e1);
    return 0;
}
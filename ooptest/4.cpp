#include<iostream>
#include<string>
using namespace std;
class instrument{
    int id;
    string name;
    int accessLevel;

    public:
    instrument(int i,string n,int a){
        id=i;
        name=n;
        accessLevel=a;
    }

    void display(){
        cout<<"\nInstrument ID: "<<id;
        cout<<"\nInstrument Name: "<<name;
        cout<<"\nAccess Level: "<<accessLevel;
    }

    friend class LabSupervisor;
};

class LabSupervisor{
    public:
    void checkAccess(instrument *i){
        cout<<"\nChecking Access...";
        cout<<"\nInstrument: "<<i->name;
        cout<<"\nCurrent Access Level: "<<i->accessLevel;
    }

    void modifyAccess(instrument *i,int newLevel){
        i->accessLevel=newLevel;
        cout<<"\nAccess level modified";
    }
};

int main(){
    instrument *i=new instrument(101,"Oscilloscope",2);
    LabSupervisor l;

    cout<<" Instrument Details\n";
    i->display();

    l.checkAccess(i);

    l.modifyAccess(i,5);

    cout<<"\n Updated Instrument Details";
    i->display();

    return 0;
}
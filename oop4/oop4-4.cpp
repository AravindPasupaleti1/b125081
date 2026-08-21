#include<iostream>
#include<string>
using namespace std;

class electricmeter{
    private:
    string name;
    int units;
    string metername;

    public:
    electricmeter(string n,int u,string m){
        name=n;
        units=u;
        metername=m;
    }

    friend void checkusage(electricmeter);
};
void checkusage(electricmeter e){
       cout<<"username:"<<e.name<<endl;
       cout<<"no of units:"<<e.units<<endl;
       cout<<"meter name:"<<e.metername<<endl;

       if(e.units>=300){
        cout<<"high usage"<<endl;
       }
       else if(100<=e.units<300){
        cout<<"moderate usage";
       }
       else if(e.units<100){
        cout<<"low usage"<<endl;
       }
}

int main(){
    electricmeter e1("aravind",443,"dhbjfhj3");
    checkusage(e1);
    return 0;
}
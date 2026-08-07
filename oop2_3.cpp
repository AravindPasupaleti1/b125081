#include<iostream>
using namespace std;

class temperature{
    public:
    float cT,fT;

    void inputtemp(){
        
        cout<<"enter temperature:";
        cin>>cT;
    }
    void converttemp(){
    
        fT=(9/5)*cT+32;
    }
    void displaytemp(){
        cout<<"the temp in celcius:"<<cT;
        cout<<"the temp in fahrenheit:"<<fT;
    }

};
int main(){
    temperature t;
    t.inputtemp();
    t.converttemp();
    t.displaytemp();
    return 0;

}

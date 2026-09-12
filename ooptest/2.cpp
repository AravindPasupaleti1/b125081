#include<iostream>
using namespace std;
class drone{
    private:
    int id;
    float battery;;
    float time;
    public:
    void update(float b){
        battery+=b;  
      }
      void update(float b,float t){
        battery+=b;
        time+=t;
      }
      friend void compareBattery(drone &d1,drone &d2);
    };

    void compareBattery(drone &d1,drone &d2){
        if(d1.battery>d2.battery){
            cout<<"Drone "<<d1.id<<" has higher battery";
        }
        else if(d2.battery>d1.battery){
            cout<<"Drone "<<d2.id<<" has higher battery";
        }
    }

    int main(){
        
        drone *d1=new drone();
        drone *d2=new drone();
        d1->update(50,2);
        d2->update(60,3);
        d1->update(10);
        d2->update(5);
        compareBattery(*d1,*d2);
        return 0;
    }
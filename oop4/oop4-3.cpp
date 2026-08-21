#include<iostream>
#include<string>
using namespace std;

class camera{
    private:
    string brand;
    string model;
    int megap;
    float storage;

    public:
    camera(string b,string m,int mp,float s){
        brand=b;
        model=m;
        megap=mp;
        storage=s;
    }
    friend void compcamera(camera,camera);
    void display(){
        cout<<"brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
        cout<<"megapixels:"<<megap<<endl;
        cout<<"storage:"<<storage<<endl;
    }
};
void compcamera(camera c1,camera c2){
    if(c1.megap>c1.megap){
        cout<<"c1 is better"<<endl;
        c1.display();
    }
    else{
        cout<<"c2 is better"<<endl;
        c2.display();
    }
}
int main(){
    camera c1("canon","EOS 200D",24,127);
    camera c2("mahindra","jeep",30,154);
    compcamera(c1,c2);
    return 0;
}
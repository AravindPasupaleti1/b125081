#include<iostream>
#include<string>
using namespace std;
class weather{
    private:
    string city;
    float temp;
    string weathercondn;

    public:
    weather(string c,float t,string w){
        city=c;
        temp=t;
        weathercondn=w;
    }
    friend void generate(weather);
};
void generate(weather w1){
    cout<<"city:"<<w1.city<<endl;
     cout<<"temp:"<<w1.temp<<endl;
      cout<<"weather condition:"<<w1.weathercondn<<endl;

      if(w1.temp>35){
        cout<<"the weather is hot"<<endl;
      }
      else if(20<=w1.temp<=35){
        cout<<"the weather is pleasant"<<endl;
      }
      else if(w1.temp<20){
        cout<<"the weather is cool "<<endl;
      }
}

int main(){
     weather w1("bhub",35,"cloudy");
     generate(w1);
     return 0;
}

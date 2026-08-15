#include<iostream>
#include <cctype>
using namespace std;
int main(){
    int n;
    int vowels = 0,consonants = 0,spaces = 0,digits = 0;
    cout<<"Enter size of character array : "<<endl;
    cin>>n;
    char *str = new char[n];
    cout<<"Enter a string : "<<endl;
    cin.getline(str,n);

    for(int i=0;str[i]!='\0';i++){
         char ch = tolower(str[i]);
         if(ch == 'a' || ch == 'e'||ch == 'i' || ch == 'o' || ch == 'u'){
            vowels++;
         }
         else if(isalpha(ch)){
            consonants++;
         }
         else if(isdigit(ch)){
            digits++;
         }
         else{
            spaces++;
         }
    }
    cout<<"the no of vowels are "<<vowels<<endl;
    cout<<"The no of consonats are "<<consonants<<endl;
    cout<<"The no of digits are "<<digits<<endl;
    cout<<"The no of spaces are "<<spaces<<endl;
    return 0;
}
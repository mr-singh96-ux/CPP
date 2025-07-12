#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string a,d;
    cout<<"Enter a string: ";
    getline(cin,a);
    // char c='-';
    for(char b:a){
        if(b==' '){
            b='-';
            d+=b;
        }
        else{
            d+=b;
        }
    }
    cout<<d;
}
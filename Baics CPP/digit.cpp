#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    bool found=false;
    string a;
    cout<<"Enter string: ";
    getline(cin,a);
    for(char c: a){
        if(!isdigit(c)){
            found=false;
            break;
        }
        else{
            found=true;
        }
    }
    if(found){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
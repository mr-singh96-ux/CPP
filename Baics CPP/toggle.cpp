#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string a,b{};
    cout<<"Enter a string: ";
    getline(cin,a);
    for(char c:a){
        if(islower(c)){
            b+=toupper(c);
        }
        else{
            b+=tolower(c);
        }
    }
    cout<<b;
}
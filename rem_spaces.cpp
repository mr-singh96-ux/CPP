#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter a string: ";
    getline(cin,a);
    for(char c:a){
        if(c!=' '){
            b+=c;
        }
    }
    cout<<b;
}
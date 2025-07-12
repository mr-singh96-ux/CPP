#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string a;
    cout<<"Enter string: ";
    getline(cin,a);
    set <char> b;
    for(char c:a){
        b.insert(c);
    }
    for(auto x: b){
    cout<<x;
}
}
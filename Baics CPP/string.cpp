#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main(){
    char full_name[50];
    cout<<"Enter your full name: ";
    cin.getline(full_name,50);
    cout<<"Your full name is: "<<full_name<<endl;
    string s1{"Frank"};
    string s2{"Frank",3};
    cout<<s2;
}
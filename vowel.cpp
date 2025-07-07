#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter any character: ";
    cin>>a;
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<a<<" is Vowel"<<endl;
        break;
        default:
        cout<<a<<" is Consonant"<<endl;
    }
}
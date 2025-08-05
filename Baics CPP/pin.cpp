#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    
    int i{};
    bool done{false};
    int c;
    cout<<"Enter the correct password: ";
    cin>>c;
    while(i<4){
        cout<<"Enter a four digit pin: ";
        cin>>n;
        if(n==c){
            cout<<"Access given to you."<<endl;
            cout<<"Thanks for banking with us.\n";
            done=true;
            break;
        }
        else{
            cout<<"Incorrect pin."<<endl;
            if(i<5){
            cout<<"Try again\n";
            }
        }
        i++;
    }
    if(!done){
        cout<<"Access denied!";
    }
}
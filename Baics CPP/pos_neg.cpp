#include <iostream>
using namespace std;
int main(){
    int num{};
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        cout<<num<<" is positive number.";
    }
    else if(num<0){
        cout<<num<<" is negative number.";
    }
    else{
        cout<<num<<" is zero.";
    }
}
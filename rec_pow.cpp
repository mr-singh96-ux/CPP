#include <iostream>
using namespace std;

int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}

int main(){
    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    cout<<pow(a,b);
}
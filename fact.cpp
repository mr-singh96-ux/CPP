#include <iostream>
using namespace std;

unsigned long long fact(unsigned long long n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<fact(n);
}
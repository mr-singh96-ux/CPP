#include <iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    while(n>0){
        return n+sum(n-1);
    }
}

int main(){
int n;
cout<<"Enter number: ";
cin>>n;
cout<<sum(n);
}
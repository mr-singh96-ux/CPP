#include <iostream>
using namespace std;
// void print(int);
// void print1(int);
// int fact(int);
int fib(int);
int main(){
    // print(5);
    // print1(10);
    // cout<<fact(5);
    for(int i=0;i<=5;i++){
    cout<<fib(i)<<" ";}
}

// void print(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// void print1(int n){
//     if(n==0) return;
//     print1(n-1);
//     cout<<n<<endl;
// }

// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1); 
// }

int fib(int n){
    if(n<=1) return n;
    return fib(n-2)+fib(n-1);
}
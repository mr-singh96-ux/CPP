#include <iostream>
using namespace std;
int main(){
    // auto greet=[](){cout<<"Hello, World!";};
    // greet();

    // auto add=[](int a,int b){return a+b;};
    // cout<<add(2,3);
    
    int x=10;
    // auto capture=[x](){ cout<<x;};
    // capture();

    auto mutable1=[x]() mutable{
        x=23;
        cout<<x;
    };
    mutable1();
}
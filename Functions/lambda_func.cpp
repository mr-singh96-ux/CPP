#include <iostream>
#include <functional>
using namespace std;
int main(){
    // auto greet=[](){cout<<"Hello, World!";};
    // greet();

    // auto add=[](int a,int b){return a+b;};
    // cout<<add(2,3);
    
    // int x=10;
    // auto capture=[x](){ cout<<x;};
    // capture();

//     auto mutable1=[x]() mutable{
//         x=23;
//         cout<<x;
//     };
//     mutable1();
// auto msg=[](){cout<<"My messages...";};
// msg();
// cout<<endl;
// cout<<"Sum is: "<<[](int a, int b){return a+b;}(2,3)<<endl;
// auto add=[](int a, int b){return a+b;}(2,3);
// cout<<"Sum is: "<<add<<endl;
// function<int(int,int)> add1 = [](int a, int b){return a+b;};
//     cout << "Sum is: "<<add1(6,6);
// int x=4, y=3;
//     auto mul = [=   ](){return x*y;};
//     cout << "MUL IS: "<<mul();

[](int x){cout<<x+5;}(10);
}
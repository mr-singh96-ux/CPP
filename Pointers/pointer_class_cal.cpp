#include <iostream>
#include <memory>
using namespace std;

class A{
    int a;
    int b;
    public:
    A(int a, int b):a(a),b(b){};
    void display(){
    string enter;
    cin>>enter;
    if(enter=="+"){
        cout<<add();
    }
    else if(enter=="-"){
        cout<<subtract();
    }
    else if(enter=="/"){
        cout<<divide();
    }
    else if(enter=="*"){
        cout<<multiply();
    }
}
    int add(){
        return a+b;
    }
    int multiply(){
        return a*b;
    }
    int subtract(){
        return a-b;
    }
    int divide(){
        return a/b;
    }
   
};
int main(){
    unique_ptr<A> ptr(new A(10,2));
   ptr->display();
}
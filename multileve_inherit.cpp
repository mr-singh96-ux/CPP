#include <iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"Class A\n";
    }
};

class B : public A{
    public:
    void showB(){
        cout<<"Class B\n";
    }
};

class C : public B{
    public:
    void showC(){
        cout<<"Class C\n";
    }
};

int main(){
    C c;
    c.showA();
    c.showB();
    c.showC();
    return 0;
}
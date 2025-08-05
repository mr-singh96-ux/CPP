#include <iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"Hello from Class A\n";
    }
};

class B: public A{
    public:
    void showB(){
        cout<<"Class B\n";
    }
};

class C : public A{
    public:
    void showC(){
        cout<<"Class C\n";
    }
};

class D:public A{
    public:
    void showD(){
        cout<<"Class D\n";
    }
};

int main(){
    B b;
    C c;
    D d;
    b.showA();
    b.showB();
    c.showA();
    c.showC();
    d.showA();
    d.showD();
    return 0;
}
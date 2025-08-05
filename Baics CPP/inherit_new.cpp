#include <iostream>
using namespace std;
class A{
    public:
    string A;
    virtual void show(){
        A="a";
        // cout<<"A";
        }
};
class B:public A{
    public:
    void show(){
        A="b";
        // cout<<"B";
    }
};
int main(){
    A* a=new B();
    a->show();
    delete a;
}
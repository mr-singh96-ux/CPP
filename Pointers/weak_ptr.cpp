#include <iostream>
#include <memory>
using namespace std;
class B;
class A{
    shared_ptr<B> b;
    public:
    void set_ptrA(shared_ptr<B> &b_ptr){
        b=b_ptr;
    }
    A(){cout<<"A Constructor is called"<<endl;}
    ~A(){cout<<"A Destructor is called"<<endl;}
};
class B{
    weak_ptr<A> a;
    public:
    void set_ptrB(shared_ptr<A> &a_ptr){
        a=a_ptr;
    }
    B(){cout<<"B Constructor is called"<<endl;}
    ~B(){cout<<"B Destructor is called"<<endl;}
};
int main(){
    shared_ptr<A> a=make_shared<A>();
    shared_ptr<B> b=make_shared<B>();
    a->set_ptrA(b);
    b->set_ptrB(a);
}
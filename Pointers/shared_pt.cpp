#include <iostream>
#include <memory>
using namespace std;
int main(){
    shared_ptr<int> p1 {new int {100}};
    
    cout<<*p1<<endl;
    cout<<p1.use_count()<<endl;
    
    shared_ptr<int> p2{p1};
    
    cout<<p1.use_count()<<endl;
    // p1=nullptr;
    // cout<<p1.use_count()<<endl;

    p1 = nullptr;
    if (p1)
        cout << p1.use_count() << endl;
    else
        cout << "p1 is null" << endl;

    shared_ptr<int> p3 = make_shared<int>(42);
    cout<<*p3<<endl;
}
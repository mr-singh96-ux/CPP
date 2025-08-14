#include <iostream>
#include <memory>
using namespace std;
int main(){
    unique_ptr<int> p1 {new int {100}};
    cout<<*p1<<endl;
    unique_ptr<int> p2=make_unique<int>(42);
    cout<<*p2<<endl;
    unique_ptr<int> p3=move(p2);
    // cout<<*p2<<endl;
    cout<<*p3<<endl;
}
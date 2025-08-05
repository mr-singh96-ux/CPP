//Unique pointer with a custom class
#include <iostream>
#include <memory>
using namespace std;
class A {
public:
    A() { cout << "Constructor called" << endl; }
    ~A() { cout << "Destructor called" << endl; }
    
};
int main() {
    unique_ptr<A> ptr = make_unique<A>();
    return 0;
}
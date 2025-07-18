#include <iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"Animal makes sound\n";
    }
};

class dog:public Animal{
    public:
    void bark(){
        cout<<"Dog barks\n";
    }
    dog(){};
};

int main(){
    dog d;
    d.sound();
    d.bark();
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a{5};
    int *ptr1{&a};
    int **ptr2{&ptr1};
    cout<<"a: "<<a<<endl;
    cout<<"Pointer1 holding address value of a, *ptr1: "<<*ptr1<<endl;
    cout<<"Pointer2 holding address value of *ptr1, **ptr2: "<<**ptr2<<endl;
}
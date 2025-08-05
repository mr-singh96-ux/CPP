#include<iostream>
#include<memory>
using namespace std;

unique_ptr<int> fix(){
    return make_unique<int>(10);
}

int main(){
    unique_ptr<int> ptr = fix();
    cout << *ptr << endl;
    return 0;
}
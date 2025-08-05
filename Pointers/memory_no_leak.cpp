#include<iostream>
#include<memory>
using namespace std;

unique_ptr<int> safeLeak(){
    unique_ptr<int> p = make_unique<int>(10);
    return p;
}

int main(){
    unique_ptr<int> ptr = safeLeak();
    cout << *ptr << endl;
    return 0;
}
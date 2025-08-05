#include<iostream>
using namespace std;

int* unsafeLeak(){
    int* p = new int(10);
    return p;
}

int main(){
    int *ptr = unsafeLeak();
    cout << *ptr << endl;
    return 0;
}
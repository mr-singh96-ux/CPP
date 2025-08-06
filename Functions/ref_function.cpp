#include <iostream>
using namespace std;
int& getRef(int &a){
    return a;
}

int main(){
    int a=10;
    getRef(a)=20;
    cout<<a;
}
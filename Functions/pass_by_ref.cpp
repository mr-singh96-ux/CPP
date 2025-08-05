#include <iostream>
using namespace std;
void print(int &n);

int main(){
    int num=100;
    cout<<"Num: "<<num<<endl;
    print(num);
    cout<<"Num: "<<num<<endl;
}

void print(int &n){
    n=1000;
}
#include <iostream>
using namespace std;
int cal_area(int ,int);
int main(){
    int a,b;
    cout<<"Enter breadth and length: ";
    cin>>a>>b;
    cout<<"Area: "<<cal_area(a,b);
}
int cal_area(int a,int b){
    return a*b;
}
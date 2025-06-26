#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,sum;
    double average;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    cout<<"Total of numbers: "<<sum<<endl;
    // average=static_cast<double>(sum)/3;
    // average=(double)sum/3;
    cout<<"Average of numbers: "<<average;
}
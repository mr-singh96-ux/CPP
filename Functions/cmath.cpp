#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Square Root of "<<num<<"is: "<<sqrt(num)<<endl;
    cout<<"Cube Root of "<<num<<"is: "<<cbrt(num)<<endl;
    cout<<"Sine of "<<num<<"is: "<<sin(num)<<endl;
    cout<<"Cos of "<<num<<"is: "<<cos(num)<<endl;
    cout<<"Ceil of "<<num<<"is: "<<ceil(num)<<endl;
    cout<<"Floor of "<<num<<"is: "<<floor(num)<<endl;
    cout<<"Float of "<<num<<"is: "<<float(num)<<endl;
    double pow1;
    cout<<"Enter power for the base: ";
    cin>>pow1;
    cout<<"Power of"<<pow1<<"to the base"<<num<<"is: "<<pow(num,pow1)<<endl;
}
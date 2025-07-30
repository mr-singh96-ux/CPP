#include <iostream>
#include <cmath>
using namespace std;
const int pi=3.14;
double cal_vol(double rad){
    double h;
    cout<<"Enter height: ";
    cin>>h;
    double vol=pi*rad*rad*h;
    cout<<"Volume of cylinder: ";
    return vol;
}
void area_cal(){
    double rad;
    cout<<"Enter radius of circle: ";
    cin>>rad;
    cout<<"Area of circle is: "<<pi*rad*rad<<endl<<cal_vol(rad)<<endl;
    cout<<"Volume done!"<<endl;
    cout<<"Area done";
}

int main(){
    area_cal();
}
#include <iostream>
#include <iomanip>
using namespace std;
double cal_func(double base_p, double tax=0.06, double ship=3.25);

int main(){
    double cost{};
    cost=cal_func(100);
    cout<<fixed<<setprecision(2);
    cout<<"Cost is: "<<cost<<endl;
    cost=cal_func(112,0.08);
    cout<<"Cost is: "<<cost<<endl;
    cost=cal_func(120,0.08,4.56);
    cout<<"Cost is: "<<cost<<endl;
}

double cal_func(double base_p,double tax, double ship){
    return base_p+=(base_p*tax)+ship;
}
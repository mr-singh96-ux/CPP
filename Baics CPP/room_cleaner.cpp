#include <iostream>
using namespace std;

int main(){
    const double cpr=30;
    int room;
    const double tax=0.06;
    double total;
    cout<<"Enter number of rooms: ";
    cin>>room;
    total=room*cpr+room*cpr*tax;
    cout<<"Total estimate: "<<total<<endl;
    cout<<"This estimate is valid for "<<30<<" days.";
}
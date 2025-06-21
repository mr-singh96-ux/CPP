#include <iostream>
using namespace std;

int main(){
    int S_room;
    int T_room;
    double s_room=25;
    double l_room=35;
    double tax=0.06;
    double total;
    double t_tx;    
    cout<<"Enter number of small rooms: ";
    cin>>S_room;
    cout<<"Enter number of large rooms: ";
    cin>>T_room;
    total=s_room*S_room+l_room*T_room;
    cout<<"Cost: "<<total<<endl;
    t_tx=total*tax+total;
    cout<<"Total Cost after tax: "<<t_tx<<endl;
    cout<<"This estimate is valid for "<<30<<" days.";
}
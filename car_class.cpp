#include <iostream>
#include <string>
using namespace std;

class vehicle{
    public:
    string name;
    string brand;
};
class veh : public vehicle {
    public:
    string fueltype;
    veh(){};
};

int main(){
    veh v;
    cin>>v.name>>v.brand>>v.fueltype;
    cout<<"Name: "<<v.name<<endl<<"Brand: "<<v.brand<<endl<<"Brand: "<<v.fueltype;
    return 0;
}
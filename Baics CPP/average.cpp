#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main(){
    vector <double> v{100, 23.4, 1.1, 9.87, 87.4, 54.65};
    double total=0;
    double avg=0;
    for(auto i: v){
        total+=i;
    }
    avg=total/v.size();
    cout<<fixed<<setprecision(2);
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
}
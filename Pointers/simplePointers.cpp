#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int num{10};
    cout<<"value: "<<num<<endl;
    cout<<"size: "<<sizeof num<<endl;
    cout<<"address: "<<&num<<endl;
    cout<<endl;
    int *p;
    cout<<"value: "<<p<<endl;
    cout<<"size: "<<sizeof p<<endl;
    cout<<"address: "<<&p<<endl;
    p=nullptr;
    cout<<"value: "<<p<<endl;
    cout<<endl;

    int *p1{nullptr};
    double *p2{nullptr};
    string *p3{nullptr};
    vector<string> *p4{nullptr};
    unsigned long long *p5{nullptr};
    cout<<"Size p1: "<<sizeof p1<<endl;
    cout<<"Size p2: "<<sizeof p2<<endl;
    cout<<"Size p3: "<<sizeof p3<<endl;
    cout<<"Size p4: "<<sizeof p4<<endl;
    cout<<"Size p5: "<<sizeof p5<<endl;
}
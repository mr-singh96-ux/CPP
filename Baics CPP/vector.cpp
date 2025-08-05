#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    cout<<v1.at(0)<<" "<<v1.at(1)<<" Size: "<<v1.size();
    cout<<endl;
    
    vector <int> v2;
    v2.push_back(100);
    v2.push_back(200);
    cout<<v2.at(0)<<" "<<v2.at(1)<<" Size: "<<v2.size();
    cout<<endl;
    
    vector <vector<int>> v2d;
    v2d.push_back(v1);
    v2d.push_back(v2);
    cout<<v2d.at(0).at(0)<<" "<<v2d.at(0).at(1)<<endl;
    cout<<v2d.at(1).at(0)<<" "<<v2d.at(1).at(1)<<endl;
    cout<<"Size: "<<v2d.size()<<endl;

    v1.at(0)=1000;
    cout<<v2d.at(0).at(0)<<" "<<v2d.at(0).at(1)<<endl;
    cout<<v2d.at(1).at(0)<<" "<<v2d.at(1).at(1)<<endl;

    cout<<v1.at(0)<<" "<<v1.at(1)<<" Size: "<<v1.size();
    cout<<endl;
}
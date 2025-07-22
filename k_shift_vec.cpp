#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n{};
    int i{};
    cout<<"Enter number of elements: ";
    cin>>n;
    vector <int> vec;
    for(i=0;i<n;i++){
        int a{};
        cin>>a;
        vec.push_back(a);
    }
    for(int a: vec){
        cout<<a<<" ";
    }
    cout<<"\n";
    int k{};
    cout<<"Enter shift: ";
    cin>>k;
    for(i=0;i<vec.size()-k;i++){
        int rem=0;
        vec.push_back(vec[rem]);
        vec.erase(vec.begin());
    }
    cout<<"After shifting: "<<endl;
    for(int a: vec){
        cout<<a<<" ";
    }
}

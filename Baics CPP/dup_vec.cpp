#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int i{};
    int num{};
    vector <int> v;
    vector <int> result;
    for(i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    for(i=0;i<v.size();i++){
        bool dup=false;
        for(int j=0;j<result.size();j++){
            if(v[i]==result[j]){
            dup=true;
            break;
        }
    }
        if(!dup){
            result.push_back(v[i]);
        }
    }
    for(auto x: result){
        cout<<x<<" ";
    }
}
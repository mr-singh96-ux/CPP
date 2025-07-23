#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i{};
    bool pal{false};
    vector<int> v;
    vector<int> v1;
    while(n>0){
        int a=n%10;
        v.push_back(a);
        n=n/10;
    }
    for(int a: v){
        cout<<a<<" ";
    }
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){
        int a=v[i];
        v1.push_back(a);
    }
    for(int a: v1){
        cout<<a<<" ";
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==v1[i]){
            pal=true;
        }
    }
    if(pal){
        cout<<"Yes palindrome";
    }
    else{
        cout<<"No palindrome";
    }
}
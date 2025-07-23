#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    while(n>0){
        int a=n%10;
        v.push_back(a);
        n=n/10;
    }
    for(int i=v.size()-1;i>=0;i--){
        v1.push_back(v[i]);
    }
    for(int a: v1){
        cout<<a;
        v2.push_back(a*a*a);
    }
    cout<<endl;
    int sum=0;
    for(int a: v2){
        sum+=a;
    }
    cout<<sum;
    return 0;
}
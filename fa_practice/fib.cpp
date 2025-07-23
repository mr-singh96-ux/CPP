#include <iostream>
using namespace std;
int main(){
    int i{},j{1};
    int n;
    cin>>n;
    int k{};
    cout<<i<<" "<<j<<" ";
    for(int a=0;a<n-1;a++){
       k=i+j;
        cout<<k<<" ";
        i=j;
        j=k;
    }
}
#include <iostream>
using namespace std;
int main(){
    int i{},j{},k{};
    int n;
    cin>>n;
    for(i=n;i>=1;i--){
        for(k=0;k<n-i;k++){
            cout<<" ";
        }
        for(j=2*i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=2;i<=n;i++){
        for(k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(j=2*i;j>1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
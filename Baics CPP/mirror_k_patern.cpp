#include <iostream>
using namespace std;
int main(){
    int n=500;
    int i{},j{},k{};
    for(i=0;i<n;i++){
        for(k=0;k<i;k++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
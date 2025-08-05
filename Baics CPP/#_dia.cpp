#include <iostream>
using namespace std;
int main(){
    int n{},i{},j{},k{};
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=2*n-i;k>1;k--){
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++){
            if(j%2==0){
            cout<<"#";}
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    for(i=n-1;i>=1;i--){
        for(k=2*n-i;k>1;k--){
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++){
            if(j%2==0){
            cout<<"#";}
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n{};
    int i{},j{},k{};
    int count= 0;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(j=1;j<i;j++){
            cout<<j;
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    for(i=n-1;i>=1;i--){
        for(k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(j=1;j<i;j++){
            cout<<j;
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n{};
    int i{},j{},k{};
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=n-i;k>0;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    for(i=1;i<=n;i++){
        int c=1;
        for(k=0;k<i;k++){
            cout<<" ";
        }
        for(j=n-i;j>0;j--){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
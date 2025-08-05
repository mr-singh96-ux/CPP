#include <iostream>
using namespace std;
int main(){
    int i{},j{},k{};
    int n=11;
    for(i=0;i<n;i++){
        for(k=n-i-1;k>0;k--){
            cout<<" ";
        }
        int p=1;
        for(j=0;j<=i;j++){
            cout<<p<<"\t";
            p=p*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
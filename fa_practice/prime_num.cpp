#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool found{true};
    if(n<=1){
        found=false;
    }
    else{
        for(int i=2;i<n/2;i++){
        if(n%i==0){
            found=false;
            break;
        }
    }
}
if(found){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
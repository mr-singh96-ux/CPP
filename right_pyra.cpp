#include <iostream>
using namespace std;
int main(){
    int i{},j{};
    // cout<<i<<endl;
    int n;
    cin>>n;
    //Star pattern
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    //Number pattern
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //Number pattern 2
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    //Number pattern 3
    int k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
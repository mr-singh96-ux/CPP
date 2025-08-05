#include <iostream>
using namespace std;
int main(){
    int i{},j{};
    int n{};
    cin>>n;
    //star pattern
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //number pattern 1
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    //number pattern 2
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //number pattern 3
    int k=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
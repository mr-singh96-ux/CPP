#include <iostream>
using namespace std;
int main(){
    int i{},j{};
    int n{};
    cin>>n;
    //star pattern
    for(i=0;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    //number pattern 1
    for(i=1;i<=n;i++){
        for(j=n-i+1;j>0;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    //number pattern 2
    int k=0;
    for(i=1;i<=n;i++){
        for(j=n-i+1;j>0;j--){
            cout<<k+1<<" ";
            k++;
        }
        cout<<endl;
    }

    //number pattern 3
    for(i=1;i<=n;i++){
        int b=1;
        for(j=n-i;j>0;j--){
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
    }
}
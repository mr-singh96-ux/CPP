#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i{},j{};
//     for(i=0;i<n;i++){
//         for(j=0;j<i+1;j++){
//         cout<<"*";
//     }
// cout<<endl;
// }
// }

int main(){
    int n=4;
    // cin>>n;
    int i{},j{};
    // for(i=n;i>0;i--){
    //     for(j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++){
    //     for(int k=2*n-i;k>0;k--){
    //         cout<<" ";
    //     }
    //     for(j=1;j<=(2*i)-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=n;i>=1;i--){
    //     for(int k=2*n-i;k>0;k--){
    //         cout<<" ";
    //     }
    //     for(j=1;j<=(2*i)-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++){
    //     for(int k=n-i;k>0;k--){
    //         cout<<" ";
    //     }
    //     for(j=1;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=n;i>=1;i--){
    //     for(int k=n-i;k>0;k--){
    //         cout<<" ";
    //     }
    //     for(j=1;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=n;i>0;i--){
    //     for(j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i=2;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    for(i=n;i>=1;i--){
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=2;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
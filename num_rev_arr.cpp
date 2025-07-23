#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
        cout<<arr[i];
    }}

}
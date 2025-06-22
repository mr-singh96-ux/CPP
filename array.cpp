#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are: {";
    for(i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1){
            cout<<",";
        }
    }
    cout<<"}";
}
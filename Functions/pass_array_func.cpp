#include <iostream>
using namespace std;
void print_arr(int arr[],size_t size);
void set_val(int arr[],size_t size,int value);
int main(){
 int arr[]={1,2,3,4,5};
 size_t size=sizeof(arr)/sizeof(arr[0]);
 print_arr(arr,size);
 set_val(arr,size,2); 
 print_arr(arr,size);  
}
void print_arr(int arr[],size_t size){
    for(size_t i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void set_val(int arr[], size_t size, int value){
    for(size_t i=0;i<size;i++){
        arr[i]=value;
    }
}
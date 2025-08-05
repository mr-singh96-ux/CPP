#include <iostream>
using namespace std;
int main(){
    bool done{false};
    int num;
    while(!done){
        cout<<"Enter number between 1 and 10: ";
        cin>>num;
        if(num<=1 || num>=10){
            cout<<"Please enter number in range, try again!"<<endl;
        }
        else{
            cout<<"Thanks!"<<endl;
            done=true;
        } 
    }

    // int num;
    // cout<<"Enter number between 1 and 10: ";
    // cin>>num;
    // while(num<=1 || num>=10){
    //     cout<<"Enter number in range, try again: ";
    //     cin>>num;
    // }
    // cout<<"Thanks!";
}
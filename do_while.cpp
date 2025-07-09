#include <iostream>
using namespace std;
int main(){
    int h,b;
    char selection;
    do{
        cout<<"Enter Height and breadth: ";
        cin>>h>>b;

        int area {h*b};
        cout<<"Area: "<<area<<endl;
        cout<<"Want more areas? ";
        cin>>selection;
        if(selection!='y' || selection!='Y'){
            cout<<"Goodbye!!";
        }
    }while(selection=='y' || selection=='Y');
}
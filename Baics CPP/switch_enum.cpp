#include <iostream>
using namespace std;
int main(){
    enum direction{
        left, right, up, down
    };
    direction heading {right};
    switch (heading){
        case left:
        cout<<"You are going left."<<endl;
        break;
        case right:
        cout<<"You are going right."<<endl;
        break;
        case up:
        cout<<"You are going up."<<endl;
        break;
        case down:
        cout<<"You are going down."<<endl;
        break;
        default:
        cout<<"Not a valid direction.";
    }
}
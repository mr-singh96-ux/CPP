#include <iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter marks: ";
    cin>>score;
    cout<<((score > 90) ? "Excellent" : "Good")<<endl;

    for(int i{1};i<=100;i++){
        cout<<i<<((i%10==0) ? "\n" : " ");
    }
}
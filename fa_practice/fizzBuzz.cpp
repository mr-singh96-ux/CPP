#include <iostream>
using namespace std;
int main(){
    int n,i{};
    cin>>n;
    for(i=0;i<n;i++){
        if(i%3==0 && i%5==0){
            cout<<i<<": FizzBuzz"<<endl;
        }
        else if(i%3==0){
            cout<<i<<": Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<i<<": Buzz"<<endl;
        }
        else {
            cout<<i<<": Others"<<endl;
        }
    }
}
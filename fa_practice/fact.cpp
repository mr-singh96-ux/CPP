#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i{};
    int re{1};
    while(n>1){
        re*=n;
        n--;
    }
    cout<<re;
}
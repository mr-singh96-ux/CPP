#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<noboolalpha;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<a<<"<"<<b<<":"<<(a<b)<<endl;
    cout<<a<<">"<<b<<":"<<(a>b)<<endl;
    cout<<a<<"<="<<b<<":"<<(a<=b)<<endl;
    cout<<a<<">="<<b<<":"<<(a>=b)<<endl;
    cout<<a<<"=="<<b<<":"<<(a==b)<<endl;
}
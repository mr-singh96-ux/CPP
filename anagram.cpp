#include <iostream>
#include <string>
using namespace std;

string sort(string x){
    int n=x.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(x[j]>x[j+1]){
                char temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    return x;
}

int main(){
    string a,b;
    cout<<"Enter strings: ";
    getline(cin,a);
    getline(cin,b);
    a=sort(a);
    b=sort(b);
    if(a==b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
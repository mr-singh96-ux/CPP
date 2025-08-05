#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    int n=a.length();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(tolower(a[j])>tolower(a[j+1])){
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; 
            }
        }
    }
    cout<<a;
}
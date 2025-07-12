#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cout<<"Enter string: ";
    getline(cin,a);
    int n=a.length();
    int start{};
    int end{n-1};
    for(char c:a){
        while(start<end){
            char temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
    }
    cout<<a;
}
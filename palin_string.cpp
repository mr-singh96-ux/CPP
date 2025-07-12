#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter string: ";
    getline(cin,a);
    int n=a.length();
    int start{};
    int end{n-1};
    b=a;
    for(char c:a){
        while(start<end){
            char temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
    }
    if(b==a){
        cout<<"Given string is Palindrome.";
    }
    else{
        cout<<"Given string is not a Palindrome.";
    }
}
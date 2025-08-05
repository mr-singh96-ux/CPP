#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    int n=a.length();
    int count{};
    set <char> vowel;
    for(char c:a){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
            vowel.insert(c);
        }
    }
    cout<<count<<endl;
    cout<<vowel.size();
}
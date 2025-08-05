#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    int frq[256]={};
    for(char c:a){
        frq[int (c)]++;
    }
    char minF='\0';
    int minN=0;
    for(int i=0;i<256;i++){
        if(frq[i]==1){
            minN=frq[i];
            minF=(char)i;
            break;
        }
    }
    cout<<" First non-repeating character: "<<minF;
}
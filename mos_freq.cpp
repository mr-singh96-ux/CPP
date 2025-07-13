#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    int frq[256]={0};
    for(char c:a){
        frq[int (c)]++;
    }
    char freqC='\0';
    int freqN=0;
    for(int i=0;i<256;i++){
        if(frq[i]>freqN){
            freqN=frq[i];
            freqC=(char)i;
        }
    }
    cout<<"Most frequent character in "<<a<<" is: "<<freqC;
}
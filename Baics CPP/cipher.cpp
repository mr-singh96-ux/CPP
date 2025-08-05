#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s1,s2 {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
    s3{"XYZABCDEFGHIJKLMNOQRSTUVWxyzabcdefghjklmnopqrstuvw"},s4,s5;
    cout<<"Enter your secret message: ";
    getline(cin,s1);
    cout<<"Encrypted Message: \n";
    for(char c: s1){
    int pos=s2.find(c);
    if(pos!=string::npos){
        char new1 = s3[pos];
        s4+=new1;
    } 
else{
    s4+=c;
}
}
cout<<s4<<endl;
cout<<"Decrypted Message: "<<endl;
for(char c: s4){
    int pos=s3.find(c);
    if(pos!=string::npos){
        char new1=s2[pos];
        s5+=new1;
    }else{
        s5+=c;
    }
}
cout<<s5<<endl;
}
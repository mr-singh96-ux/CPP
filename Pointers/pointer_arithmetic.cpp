#include <iostream>
using namespace std;
int main(){
    int scores[] {100,98,89,65,-1};
    int *score_ptr {scores};
    while(*score_ptr!=-1){
        cout<<*score_ptr<<endl;
        score_ptr++;
    }
    cout<<"--------------\n";
    score_ptr=scores;
    while(*score_ptr!=-1){
        cout<<*score_ptr++<<endl;
    }
    cout<<"--------------\n";
    string s1{"Kirat"};
    string s2{"Itish"};
    string s3{"Kirat"};
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<(p1==p2)<<endl;
    cout<<p2<<"=="<<p3<<(p2==p3)<<endl;
    cout<<p3<<"=="<<p1<<(p3==p1)<<endl;
    cout<<*p1<<"=="<<*p3<<(*p1==*p3)<<endl;
    p3=&s2;
    cout<<*p1<<"=="<<*p3<<(*p1==*p3)<<endl;
    cout<<"--------------\n";
    char name[]={"Kirat"};
    char *p4{nullptr},*p5{nullptr};
    p4=&name[0];
    p5=&name[3];
    cout<<"In string character "<<*p4<<" is "<<p5-p4<<" steps away from the character "<<*p5;    
}
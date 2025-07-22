#include <iostream>
#include <string>
using namespace std;

class Light{
    public:
    string brightness[3]={"High","Medium","Low"};
    string status[2]={"ON","OFF"};
    string room;
    string stB="High";
    string st="ON";

    void adjustB(string n, string m){
        if((n==brightness[0]||n==brightness[1]||n==brightness[2]) && (m==status[0]||m==status[1])){
        stB=n;
        st=m;
        cout<<"Brightness is adjusted to '"<<stB<<"' and status of light is '"<<st<<"'! \n";}
    
    else{
        cout<<"Invalid input, try again!\n";
    }
}
};

int main(){
Light l;
string n,m;
char c;
bool done=true;
while(done){
cin>>n>>m;
l.adjustB(n,m);
cout<<"Do you want more adjustment? (y/n): ";
cin>>c;
if(c=='n'){
    done=false;
    break;
    cout<<"Thanks for using it!";
}
}
}
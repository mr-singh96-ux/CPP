#include <iostream>
#include <string>
using namespace std;

class rectangle{
    public:
    int l,b;
    rectangle(){};
    rectangle(int len, int bed){
        this-> l=len;
        this-> b=bed;       
    }
    int result(int l,int b){
        return l*b;
    }
    void display(){
        cout<<result(l,b);
    }
};

int main(){
    rectangle r;
    cin>>r.l>>r.b;
    r.display();
    return 0;
}
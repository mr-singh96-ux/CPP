#include <iostream>
using namespace std;

class sC{
    private:
    int num1;
    // cin>>num1;
    public:
    void input(){
        cout<<"Enter number: ";
        cin>>num1;
    }
    void sq(){
        cout<<"Sqaure: "<<num1*num1<<endl;
    }
    void cub(){
        cout<<"Sqaure: "<<num1*num1*num1<<endl;
    }
};

int main(){
    sC s;
    // cin>>s.num1;
    s.input();
    s.sq();
    s.cub();
    return 0;
}
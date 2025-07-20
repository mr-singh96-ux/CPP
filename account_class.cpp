#include <iostream>
#include <string>
using namespace std;

class Account{
    public:
    string name;
    double balance;
    void deposit(double bal){
        balance+=bal;
        cout<<"In deposit";
        cout<<"\nNew balance: "<<balance<<endl;
    }
    void withdraw(double bal){
        balance-=bal;
        cout<<"In Withdraw";
        cout<<"\nNew balance: "<<balance<<endl;
    }
};

int main(){
    Account kirat;
    kirat.name="Kiratbir Singh";
    kirat.balance=2500;
    kirat.deposit(500);
    kirat.withdraw(2500);
    

    Account *new1=new Account;
    (*new1).name="Vansh";
    (*new1).balance=300;
    new1->deposit(-300);
    new1->withdraw(100);
    return 0;
}
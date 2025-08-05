#include <iostream>
#include <string>
using namespace std;

class Account{
    string name;
    double balance;
    int pin;
    public:
    void set_name(string n){
        name=n;
    }
    void set_bal(double bal){
        balance=bal;
    }
    void set_pin(int n){
        pin=n;
    }
    void deposit(int n){
        balance+=n;
    }
    void withdraw(double n){
        balance-=n;
    }
    void dis(int n){
        if(pin==n){
            int num;
            cout<<"Enter amount to withdraw: ";
            cin>>num;
            withdraw(num);
            cout<<"New balance: "<<balance<<endl;
        }
        else{
            cout<<"Entered wrong pin!";
        }
    }
};

int main(){
    Account a;
    string name;
    double bal;
    int pin;
    getline(cin, name);
    cin>>bal;
    cin>>pin;
    cin.ignore();
    a.set_name(name);
    a.set_bal(bal);
    a.set_pin(pin);
    a.deposit(100);
    // a.withdraw(20);
    a.dis(150);
    return 0;
}
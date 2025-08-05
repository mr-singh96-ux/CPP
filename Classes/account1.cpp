#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    string name;
    double balance;
    public:
    void setBal(double bal){
        balance=bal;
    }
    double getBal(){
        cout<<"New balance: "<<balance;
        return balance;
    }
    void deposit(double a);
    void withdraw(double b);
    void setName(string n);
    string getName();
};

void Account::deposit(double i){
    balance+=i;
    // cout<<"New balance: "<<balance<<endl;
}

void Account::withdraw(double j){
    balance-=j;
    // cout<<"New balance: "<<balance<<endl;
}

void Account::setName(string n){
    name=n;
}

string Account::getName(){
    cout<<"Name: "<<name<<endl;
    return name;
}

int main(){
    Account kirat;
    kirat.setName("Kiratbir Singh");
    kirat.setBal(200);
    kirat.deposit(200);
    kirat.withdraw(29);
    kirat.getName();
    kirat.getBal();
    return 0;
}
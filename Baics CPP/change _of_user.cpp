/*  1 dollar = 100 cents
    1 quarter = 25 cents
    1 dime = 10 cents
    1 nickle = 5 cents
    1 penny = 1 cent
*/
#include <iostream>
using namespace std;
int main(){
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickle_value {5};
    const int penny_value {1};
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    int balance;
    int dollar=amount/dollar_value;
    balance=amount%dollar_value;
    int quarter=balance/quarter_value;
    balance=balance%quarter_value;
    int dime=balance/dime_value;
    balance=balance%dime_value;
    int nickle=balance/nickle_value;
    balance=balance%nickle_value;
    int penny=balance/penny_value;
    balance=balance%penny_value;

    cout<<"Dollar: "<<dollar<<endl;
    cout<<"Quarter: "<<quarter<<endl;
    cout<<"Dime: "<<dime<<endl;
    cout<<"Nickle: "<<nickle<<endl;
    cout<<"Penny: "<<penny<<endl;
}
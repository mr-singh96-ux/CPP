#include <iostream>
#include <string>
using namespace std;

class Movie{
    public:
    string m_name[3]={"Sardar Ji 3", "Border 2","Son of Sardaar 2"};
    int t_seats=150;
    double dur=2.5;
    void bookTic(string name, int n){
        if(n>t_seats){
            cout<<"Cannot done as remaining seats are: "<<t_seats<<endl;
            return;
        }

        if(name==m_name[0]||name==m_name[1]||name==m_name[2]){
            int cost=220;
            int t_cost=n*cost;
            cout<<"Booking Confirmed for '"<<name<<"' with total cost = "<<t_cost<<endl;
            t_seats-=n;
            cout<<"Remaining seats: "<<t_seats<<endl;
        }
        else {
            cout << "Movie not found. Please check the name.\n";
        }
    }
};

int main(){
Movie v;
while(v.t_seats>0){
cin.ignore();
string name;
cout<<"Enter movie name: ";
getline(cin, name);
int n;
cout<<"Enter number of seats: ";
cin>>n;
v.bookTic(name,n);
char c;
cout<<"Do you want to book more? (y/n): ";
cin>>c;
if(c=='n'){
    cout<<"Thanks for booking with us";
    break;
}
}
// cin.ignore();
}
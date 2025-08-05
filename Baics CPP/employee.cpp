#include <iostream>
using namespace std;

struct emp{
    string name;
    int id;
    string des;
    int salary;
};

int main(){
    int n,i;
    cout<<"Enter Employees: ";
    cin>>n;
    struct emp s[n];
    for(i=0;i<n;i++){
        cin>>s[i].name>>s[i].id>>s[i].des>>s[i].salary;
    }
    cout<<"Name \t"<<"ID \t"<<"Designation \t"<<"Salary \t"<<"DA \t"<<"HRA \t"<<"Gross Salary \t"<<endl;
    for(i=0;i<n;i++){
        cout<<s[i].name<<"\t";
        cout<<s[i].id<<"\t";
        cout<<s[i].des<<"\t\t";
        cout<<s[i].salary<<"\t";
        cout<<float(s[i].salary*10/100)<<"\t";
        cout<<float(s[i].salary*5/100)<<"\t";
        cout<<double(s[i].salary*5/100)+double(s[i].salary*10/100)+double(s[i].salary)<<"\t";
    }
    cout<<endl;
}
#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    long long int roll_no;
    int marks[3];
    int sum{};
    double aveg{};
    void avg(){
        sum=0;
        sum+=marks[0]+marks[1]+marks[2];
        aveg=sum/3.0;
        cout<<"Average of marks are: "<<aveg<<endl;
    }
    void pass(){
        if(aveg>=25){
            cout<<name<<" is pass and promoted to next class.\n";
        }
        else{
            cout<<name<<" is failed!\n";
        }
    }
};

int main(){
    int i{},n{};
    cout<<"Enter number of students: ";
    cin>>n;
    cin.ignore();
    Student *s=new Student[n];
    for(i=0;i<n;i++){
        getline(cin, s[i].name);
        cin>>s[i].roll_no;
        for(int j=0;j<3;j++){
        cin>>s[i].marks[j];
        }
        cin.ignore();
        
    }
    for(i=0;i<n;i++){
        s[i].avg();
        s[i].pass();
    }
    
}
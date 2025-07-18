#include <iostream>
using namespace std;

struct student{
    string name;
    int marks[4];
    char grade;
};

int main(){
    int n,i,j;
    cout<<"Enter no. of students: ";
    cin>>n;
    struct student s[n];
    for(i=0;i<n;i++){
        cin>>s[i].name;
        for(j=0;j<4;j++){
            cin>>s[i].marks[j];
        }
    }
    float avg=0;
    for(i=0;i<n;i++){
        cout<<"Name: "<<s[i].name<<endl<<"Marks: ";
        int sum=0;
        for(j=0;j<4;j++){
            
            cout<<s[i].marks[j]<<" ";
            sum+=s[i].marks[j];
        }
        avg=float(sum)/80*100;
        cout<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Percentage: "<<avg<<endl;
        
        if(avg>=90){
            s[i].grade='A';
        }
        else if(avg>=75 && avg<90){
            s[i].grade='B';
        }
        else if(avg>=60 && avg<75){
            s[i].grade='C';
        }
        else if(avg>=40 && avg<60){
            s[i].grade='D';
        }
        else{
            s[i].grade='F';
        }
        cout<<s[i].grade<<endl;
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

struct student{
    string name;
    int roll;
    int marks[3];
    double avg;
};

int main(){
    int n;
    cin>>n;
    struct student s1[n];
    for(int i=0;i<n;i++){
        cin>>s1[i].name;
        cin>>s1[i].roll;
        for(int j=0;j<3;j++){
            cin>>s1[i].marks[j];
        }
    }
    for(int i=0;i<n;i++){
        double sum=0;
        for(int j=0;j<3;j++){
            sum+=s1[i].marks[j];
        }
        s1[i].avg=sum/3;
    }
    double h_avg=s1[0].avg;
    int h_roll=s1[0].roll;
    for(int i=0;i<n;i++){
        if(h_avg<s1[i].avg){
            h_avg=s1[i].avg;
            h_roll=s1[i].roll;
        }
    }
    cout<<"Highest Average: "<<h_avg<<endl;
    cout<<"Highest Roll No: "<<h_roll<<endl;
}
#include <iostream>
using namespace std;
struct student{
    string name;
    int marks[3];
    long long roll;
    int avg{};
};

int main(){
    int n;
    cin>>n;
    struct student s1[n];
    int i{};
    for(i=0;i<n;i++){
        cin>>s1[i].name;
        cin>>s1[i].roll;
        for(int j=0;j<3;j++){
        cin>>s1[i].marks[j];}
    }
    
    for(i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
        sum+=s1[i].marks[j];}
            s1[i].avg=sum/3;
    }
    for(i=0;i<n;i++){
        cout<<"Average: "<<s1[i].avg<<" of student: "<<s1[i].name<<endl;
    }
}
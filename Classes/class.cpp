#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(){};
    student (string name, int age){
        this-> name=name;
        this-> age=age;
    }
};

int main(){
    student s1;
    cin>>s1.name>>s1.age;
    cout<<"Name: "<<s1.name<<endl<<"Age: "<<s1.age;
    return 0;
}
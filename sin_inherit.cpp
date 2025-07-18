#include <iostream>
using namespace std;

class Student{
    public:
    void dis(){
        cout<<"I am a student!\n";
    }
};

class Uni : public Student{
    public:
 void uni(){
    cout<<"I read in Chitkara University!";
 }
};

int main(){
    Uni u;
    u.dis();
    u.uni();
    return 0;
}
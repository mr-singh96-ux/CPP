#include <iostream>
#include <string>
using namespace std;

class Exam{
    public:
    string ques[5]={"What is your name?", "Largest state of India?", "Capital of Panjab?", "Royal City of Aisa?","Captial if India?"};
    string opts[5][4]={{"Kirat","Kiratbir","Kiratbir Singh","Singh Ji"},{"Panjab","Haryana","UP","Rajasthan"},{"Chandigarh","Patiala","SAS Nagar","Ludhiana"},{"Patiala","Paris","Lahore","Kabul"},{"Delhi","New Delhi","Noida","Gurugram"}};
    string Copt[5]={"Kiratbir Singh","Rajasthan","Chandigarh","Patiala","New Delhi"};
    int score=0;
    void exam(){
        for(int i=0;i<5;i++){
        cout<<"--> "<<ques[i]<<endl;
        for(int j=0;j<4;j++){
        cout<<j+1<<". "<<opts[i][j]<<endl;}
        string n;
        cout<<"Your answer: ";
        getline(cin, n);
        if(Copt[i]==n){
            cout<<"Correct!\n";
            score++;
        }
        else{
            cout<<"Incorrect, correct option is: "<<Copt[i]<<endl;
        }
    }
    cout<<"You obtained: "<<score<<" out of 5!\n";
}
};

int main(){
Exam *e=new Exam;
// string n;
// getline(cin,n);
// for(int i=0;i<5;i++){
    e->exam();
// }
}
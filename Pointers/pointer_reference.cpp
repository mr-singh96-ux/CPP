#include <iostream>
#include <vector>
using namespace std;
// void val1(int *a){
//     *a*=2;
// }
// int main(){
//     int val=10;
//     int *p={nullptr};
//     cout<<"Value: "<<val<<endl;
//     val1(&val);
//     cout<<"Value: "<<val<<endl;
//     p=&val;
//     val1(p);
//     cout<<"Value: "<<val<<endl;
// }
void display(vector<string> *a){
    for(auto c: *a){
        cout<<c<<" ";
    }
}
void ar_dis(int *a,int i){
    while(*a!=i){
        cout<<*a++<<" ";
    }
}

int main(){
    vector<string> p{"Kirat","Harsh","Itish"};
    display(&p);
    int arr[]={100,98,97,89,79,-1};
    cout<<endl;
    ar_dis(arr,-1);
}
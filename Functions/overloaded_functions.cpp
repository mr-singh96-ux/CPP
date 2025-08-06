// #include <iostream>
// #include <vector>
// using namespace std;
// void print(int);
// void print(double);
// void print(string);
// void print(string ,string);
// void print(vector<string>);

// int main(){
// print(100);
// print(113.13);
// print("C-style string");
// string s{"C++ string"};
// print("C-style string",s);
// vector<string> n{"Kirat","Harsh","Itish"};
// print(n);
// }
// void print(int a){
//     cout<<"Printing int: "<<a<<endl;
// }
// void print(double a){
//     cout<<"Printing double: "<<a<<endl;
// }
// void print(string a){
//     cout<<"Printing string: "<<a<<endl;
// }
// void print(string a,string b){
//     cout<<"Printing 2 strings: "<<a<<" "<<b<<endl;
// }
// void print(vector<string> a){
//     cout<<"Printing vector<string>: "<<endl;
//     for(auto i:a){
//         cout<<i<<" ";
//     }
// }

#include <iostream>
using namespace std;
int sum1(int, int);
double sum1(double, double);
long long int sum1(long long int, long long int);
void sum1();
int main(){
    cout<<sum1(2,3)<<endl;
    cout<<sum1(2.5,5.5)<<endl;
    cout<<sum1(24372312,12768768)<<endl;
    sum1();
}
int sum1(int a, int b){
    return a+b;
}
double sum1(double a, double b){
    return a*b;
}
long long int sum1(long long int a, long long int b){
    return a-b;
}
void sum1(){
    cout<<10/2;
}
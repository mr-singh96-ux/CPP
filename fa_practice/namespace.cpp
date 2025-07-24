#include<iostream>
using namespace std;

namespace example{
    int sample = 50;
    int add(int a, int b){
        return a+b;
    }
};

// using namespace example;
int main(){
    // cout << example::sample << endl;
    // cout << example::add(2,4) << endl;

    // or by adding "using namespace example" above
    
    cout << example::sample << endl;
    cout << example::add(2,4) << endl;
    return 0;
}
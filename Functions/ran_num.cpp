#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int rand_num{};
    int min{1};
    size_t count{10};
    int max{6};
    cout<<"RNAD_MAX of my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));
    for(size_t i=1;i<=count;++i){
        rand_num=rand()%max+min;
        cout<<rand_num<<endl;
    }
}
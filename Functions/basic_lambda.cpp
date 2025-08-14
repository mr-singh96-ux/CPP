#include <iostream>
#include <functional>
#include <vector>
using namespace std;
void print_if(vector<int> nums, bool (*predicate) (int)){
    for(auto i: nums){
        if(predicate(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    // int n{3};
    // vector<int> v{10,20,30};
    // auto sums=[](vector<int> vec,int n){
    //     int sum{};
    //     for(auto v: vec){
    //         sum+=v;
    //     }
    //     return sum;
    // };
    // cout<<sums(v,n);

    // int test_score1=40;
    // int test_score2=40;
    // cout<<"Test_score1: "<<test_score1<<endl;
    // cout<<"Test_score2: "<<test_score2<<endl;
    // auto bonus=[](int *score1,int *score2, int bonus){
    //     *score1+=bonus;
    //     *score2+=bonus;
    // };
    // bonus(&test_score1,&test_score2,5);
    // cout<<"Test_score1: "<<test_score1<<endl;
    // cout<<"Test_score2: "<<test_score2<<endl;

    vector<int> num{1,2,3};
    print_if(num, [] (auto x) {return x%2==0;});
    cout<<endl;
    print_if(num, [] (auto x) {return x%2!=0;});
}
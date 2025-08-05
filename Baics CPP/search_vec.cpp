#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int i{};
    int num;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Enter element to check: ";
    int num1;
    cin>>num1;
    bool found=false;
    for(i=0;i<n;i++){
        cout<<vec.at(i)<<" ";
        if(num1=num){
            found=true;
        }
        else{
            found=false;
        }
    }
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}
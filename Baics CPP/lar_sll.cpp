#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int i{};
    for(i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int max=vec[0];
    for(i=0;i<n;i++){
        if(vec[i]>max){
            max=vec[i];
        }
    }
    cout<<"Max: "<<max<<endl;
}
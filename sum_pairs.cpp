#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n{};
    cout<<"Enter number of elements: ";
    cin>>n;
    int i{};
    vector <int> vec;
    for(i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int result{};
    // for(i=0;i<n;i++){
    //     cout<<vec[i]<<" ";
    // }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            result=result+vec[i]*vec[j];
        }
    }
    cout<<result;
}
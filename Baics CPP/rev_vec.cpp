#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elemnts: ";
    cin>>n;
    int i{};
    int num;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(i=1;i<=n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            int temp=vec[start];
            vec[start]=vec[end];
            vec[end]=temp;
            start++;
            end--;
        }
}
cout<<vec.at(0);
}
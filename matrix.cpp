#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;
    int matrix[row][col];
    int i,j;
    cout<<"Enter elements: ";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matix: "<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
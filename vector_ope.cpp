#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"P: display items\n";
    cout<<"A: add new element to vector.\n";
    cout<<"M: find mean of elements of vector.\n";
    cout<<"S: Smallest among given elements.\n";
    cout<<"L: Largest among elements.\n";
    cout<<"Q: quit\n";
    bool done=false;
    vector <int> vec{1};
    int n;
    int num;
    while(!done){
        char a{};
    cout<<"Enter your choice: ";
    cin>>a;
    a=tolower(a);
        if(a=='p'){
            n=vec.size();
            if(n>0){
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"vector is empty"<<endl;
        }
        }
        else if(a=='a'){
            cout<<"Enter integer: ";
            cin>>num;
            vec.push_back(num);
            cout<<num<<" added."<<endl;
        }

        else if(a=='m'){
            n=vec.size();
            double sum{};
            for(int i=0;i<n;i++){
                sum+=vec[i];
            }
            cout<<"Mean: "<<sum/n<<endl;
        }

        else if(a=='s'){
            n=vec.size();
            int min=vec[0];
            for(int i=1;i<n;i++){
            if(vec[i]<min){
                min=vec[i];
            }
        }
        cout<<"Smallest: "<<min<<endl;
        }

        else if(a=='l'){
            n=vec.size();
            int max=vec[0];
            for(int i=1;i<n;i++){
                if(vec[i]>max){
                    max=vec[i];
                }
            }
            cout<<"Largest: "<<max<<endl;
        }

        else if(a=='q'){
            cout<<"Thanks, Good Bye!";
            done=true;
        }

        else{
            cout<<"Entered invaild input"<<endl;
            cout<<"P: display items\n";
            cout<<"A: add new element to vector.\n";
            cout<<"M: find mean of elements of vector.\n";
            cout<<"S: Smallest among given elements.\n";
            cout<<"L: Largest among elements.\n";
            cout<<"Q: quit\n";
        }
    }
}
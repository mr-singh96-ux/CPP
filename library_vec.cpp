#include <iostream>
#include <string>
using namespace std;

class Library{
    public:
    string author_name;
    string book_name;
    int isbn_num;
    bool av{false};

    void sp(string name){
        if(name==book_name){
            av=true;
            cout<<"Yes the "<<book_name<<" is available!"<<endl;
        }
    }
    void det(string name){
            cout<<"Title: "<<book_name<<endl;
            cout<<"Author name: "<<author_name<<endl;
            cout<<"ISBN: "<<isbn_num<<endl;
    }
};

int main(){
    int i{},n{};
    cout<<"Enter books: ";
    cin>>n;
    Library *l=new Library[n];
    cin.ignore();
    for(i=0;i<n;i++){
        getline(cin, l[i].author_name);
        getline(cin, l[i].book_name);
        cin>>l[i].isbn_num;
        cin.ignore();
    }
    bool found=false;
    string name;
    getline(cin, name);
    for(i=0;i<n;i++){
        l[i].sp(name);
        if(l[i].av){
            l[i].det(name);
            found=true;
        }
        else{
            found=false;
        }
    }
    if(!found){
        cout<<"Book not found!";
    }
    return 0;
}
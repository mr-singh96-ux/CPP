#include <iostream>
using namespace std;
class Book{
    string title;
    string author;
    public:
    // void set_title(string n){
    //     title=n;
    // }
    // void set_author(string n){
    //     author=n;
    // }
    string get_det() const {
        cout<<"Title: "<<title<<endl<<"Author: ";
        return author;
    }
    Book();
    Book(string title_name, string author_name);
};
Book::Book():Book{"None","None"}{};
Book::Book(string title_name, string author_name): title{title_name}, author{author_name}{};
int main(){
 const Book b{"C++","Bjarne"};
 cout<<b.get_det();
 return 0;
}
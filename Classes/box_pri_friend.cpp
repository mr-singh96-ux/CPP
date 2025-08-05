#include <iostream>
using namespace std;

    class Box{
        int length, breadth, height;
        
        int vol(){
            return length*breadth*height;
        }
    public:
    Box(int l,int b,int h){
        length = l;
        breadth = b;
        height = h;
        }
        friend class Printer;
    };
class Printer{
    public:
    void display(Box b){
        cout<<"Volume: "<<b.vol()<<endl;
    }
};
int main(){
    Box b{10,5,2};
    Printer p;
    p.display(b);
}
#include <iostream>
using namespace std;
class counter
{
    static int count;

public:
    counter()
    {
        count++;
    }
    void display()
    {
        cout << "Number of objects: " << count;
    }
};
int counter::count = 0;
int main()
{
    counter a,b,c,d;
    c.display();
    // c.display();
}
#include <iostream>
#include <memory>

class First
{
    public:
    First()
    {
        std::cout << "Constructor\n";
    }
    ~First()
    {
        std::cout << "Destructor\n";
    }

    // void display()
    // {
    //     std::cout << "Hello hello\n";
    // }
};

int main(void)
{
    std::unique_ptr<First> firstPointer{new First()};

    // firstPointer -> display();
    return 0;
}
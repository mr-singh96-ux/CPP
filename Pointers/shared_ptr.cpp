#include <iostream>
#include <memory>

class SharedInt {
public:
    std::shared_ptr<int> ptr;

    SharedInt(int value) : ptr(std::make_shared<int>(value)) {}

    void show() const {
        if (ptr) {
            std::cout << "Value: " << *ptr << std::endl;
            std::cout << "Use count: " << ptr.use_count() << std::endl;
        } else {
            std::cout << "Pointer is null." << std::endl;
        }
    }
};

int main() {
    SharedInt obj1(42);
    obj1.show();

    // Share ownership
    SharedInt obj2 = obj1;
    std::cout << "After sharing:" << std::endl;
    obj1.show();
    obj2.show();

    // Reset one pointer
    obj1.ptr.reset();
    std::cout << "After resetting obj1.ptr:" << std::endl;
    obj1.show();
    obj2.show();

    return 0;
}
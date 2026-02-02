#include <iostream>

// First namespace
namespace First {
    int value = 10;
    void show() {
        std::cout << "Value from First namespace = " << value << std::endl;
    }
}

// Second namespace
namespace Second {
    int value = 20;
    void show() {
        std::cout << "Value from Second namespace = " << value << std::endl;
    }
}

int main() {

    using namespace First;
    show();

    using namespace Second;
    show();

    return 0;
}
